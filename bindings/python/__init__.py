# Copyright (c) 2007 Neil Jagdish Patel <njpatel@gmail.com>
# Copyright (c) 2008, 2009 Mark Lee <avant-wn@lazymalevolence.com>
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the
# Free Software Foundation, Inc., 59 Temple Place - Suite 330,
# Boston, MA 02111-1307, USA.

# -*- Mode: Python; py-indent-offset: 4 -*-

import sys
from gettext import gettext as _
import locale
import getopt

# load the required modules:
import gobject

_version = getattr(gobject, 'pygobject_version', ())
if _version < (2, 11, 1):
    raise ImportError("Awn requires PyGObject >= 2.11.1, but %s was found" %
                      _version)

import gtk

from awn import *
import desktopagnostic.vfs

uid = "0"
window = 0
panel_id = 0

# i18n support
LOCALEDIR = '/usr/local/share/locale'
TEXTDOMAIN = 'avant-window-navigator'
locale.bindtextdomain(TEXTDOMAIN, LOCALEDIR)

def init(argv):
    global uid
    global window
    global panel_id

    desktopagnostic.vfs.init()
    
    try:
        opts, args = getopt.getopt(argv, "u:w:i:",
                                   ["uid=", "window=", "panel-id="])
    except getopt.GetoptError:
        print("Unable to parse args")
        sys.exit(2)

    for opt, arg in opts:
        if opt in ("-u", "--uid"):
            uid = arg
        elif opt in ("-w", "--window"):
            # casting to long because of
            # http://bugzilla.gnome.org/show_bug.cgi?id=539365
            window = long(arg)
        elif opt in ("-i", "--panel-id"):
            panel_id = int(arg)


def embed_applet(applet):
    gtk.Plug.__init__(applet, globals()['window'])
    # applet's embedded signal handler automatically calls show_all()


def check_dependencies(scope, *modules, **choice_modules):
    '''
    Special flag: exit_on_failure=bool
    Makes the applet exit if a dependency is not found.
    '''
    exit_on_failure = True
    if len(choice_modules) > 0 and 'exit_on_failure' in choice_modules:
        exit_on_failure = bool(choice_modules['exit_on_failure'])
        del choice_modules['exit_on_failure']
    not_found_modules = []

    def add_module(module, name=None):
        try:
            if '.' in module:
                mod_split = module.split('.')
                submod = mod_split[-1]
                from_list = [submod]
                if name is None:
                    name = submod
            else:
                if name is None:
                    name = module
                from_list = []
            scope[name] = __import__(module, scope, locals(), from_list)
            return True
        except ImportError:
            return False
    for module in modules:
        success = add_module(module)
        if not success:
            not_found_modules.append(module)
    for name, mods in choice_modules.iteritems():
        found = False
        for module in mods:
            success = add_module(module, name)
            if success:
                found = True
                break
        if not found:
            not_found_modules.append(' or '.join(mods))
    if len(not_found_modules) > 0:
        try:
            import pygtk
            pygtk.require('2.0')
        except:
            pass
        import gtk
        RESPONSE_WIKI = 21
        msg = _('''\
The following Python modules could not be found: %s.  There are a few possible
explanations for this:

1. You do not have this Python module installed.  In this case, you should
visit the AWN wiki's applets section to figure out the exact name of the
package for your distribution that provides this module.

2. The module is installed in a non-standard location.  This is usually the
case when you manually install a package, that is, not via your distribution's
package manager.  This situation is explained in the FAQ section of the wiki.
''') % ', '.join(not_found_modules)

        dialog = gtk.MessageDialog(None, gtk.DIALOG_MODAL, gtk.MESSAGE_ERROR,
                                   gtk.BUTTONS_NONE, msg)
        dialog.add_button(_('Awn Wiki'), RESPONSE_WIKI).grab_default()
        dialog.add_button(gtk.STOCK_OK, gtk.RESPONSE_OK)
        dialog.set_alternative_button_order([gtk.RESPONSE_OK, RESPONSE_WIKI])
        if dialog.run() == RESPONSE_WIKI:
            url = 'http://wiki.awn-project.org/Applets:Dependencies'
            import webbrowser
            if hasattr(webbrowser, 'open_new_tab'):
                webbrowser.open_new_tab(url)
            else:
                webbrowser.open_new(url)
        dialog.hide_all()
        dialog.destroy()
        if exit_on_failure:
            import sys
            sys.exit(RESPONSE_WIKI)
