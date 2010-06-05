
/* Generated data (by glib-mkenums) */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "awn-enum-types.h"
/* enumerations from "awn-defines.h" */
#include "awn-defines.h"
GType
awn_applet_flags_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GFlagsValue values[] = {
        { AWN_APPLET_FLAGS_NONE, "AWN_APPLET_FLAGS_NONE", "flags-none" },
        { AWN_APPLET_EXPAND_MINOR, "AWN_APPLET_EXPAND_MINOR", "expand-minor" },
        { AWN_APPLET_EXPAND_MAJOR, "AWN_APPLET_EXPAND_MAJOR", "expand-major" },
        { AWN_APPLET_IS_EXPANDER, "AWN_APPLET_IS_EXPANDER", "is-expander" },
        { AWN_APPLET_IS_SEPARATOR, "AWN_APPLET_IS_SEPARATOR", "is-separator" },
        { AWN_APPLET_HAS_SHAPE_MASK, "AWN_APPLET_HAS_SHAPE_MASK", "has-shape-mask" },
        { AWN_APPLET_DOCKLET_HANDLES_POSITION_CHANGE, "AWN_APPLET_DOCKLET_HANDLES_POSITION_CHANGE", "docklet-handles-position-change" },
        { AWN_APPLET_DOCKLET_CLOSE_ON_MOUSE_OUT, "AWN_APPLET_DOCKLET_CLOSE_ON_MOUSE_OUT", "docklet-close-on-mouse-out" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_flags_register_static("AwnAppletFlags", values);
    }
  return enum_type_id;
}
GType
awn_applet_license_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { AWN_APPLET_LICENSE_GPLV2, "AWN_APPLET_LICENSE_GPLV2", "gplv2" },
        { AWN_APPLET_LICENSE_GPLV3, "AWN_APPLET_LICENSE_GPLV3", "gplv3" },
        { AWN_APPLET_LICENSE_LGPLV2_1, "AWN_APPLET_LICENSE_LGPLV2_1", "lgplv2-1" },
        { AWN_APPLET_LICENSE_LGPLV3, "AWN_APPLET_LICENSE_LGPLV3", "lgplv3" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static("AwnAppletLicense", values);
    }
  return enum_type_id;
}
GType
awn_path_type_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { AWN_PATH_LINEAR, "AWN_PATH_LINEAR", "linear" },
        { AWN_PATH_ELLIPSE, "AWN_PATH_ELLIPSE", "ellipse" },
        { AWN_PATH_LAST, "AWN_PATH_LAST", "last" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static("AwnPathType", values);
    }
  return enum_type_id;
}
/* enumerations from "awn-cairo-utils.h" */
#include "awn-cairo-utils.h"
GType
awn_cairo_round_corners_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GFlagsValue values[] = {
        { ROUND_NONE, "ROUND_NONE", "none" },
        { ROUND_TOP_LEFT, "ROUND_TOP_LEFT", "top-left" },
        { ROUND_TOP_RIGHT, "ROUND_TOP_RIGHT", "top-right" },
        { ROUND_BOTTOM_RIGHT, "ROUND_BOTTOM_RIGHT", "bottom-right" },
        { ROUND_BOTTOM_LEFT, "ROUND_BOTTOM_LEFT", "bottom-left" },
        { ROUND_TOP, "ROUND_TOP", "top" },
        { ROUND_BOTTOM, "ROUND_BOTTOM", "bottom" },
        { ROUND_LEFT, "ROUND_LEFT", "left" },
        { ROUND_RIGHT, "ROUND_RIGHT", "right" },
        { ROUND_ALL, "ROUND_ALL", "all" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_flags_register_static("AwnCairoRoundCorners", values);
    }
  return enum_type_id;
}
/* enumerations from "awn-effects.h" */
#include "awn-effects.h"
GType
awn_effect_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { AWN_EFFECT_NONE, "AWN_EFFECT_NONE", "none" },
        { AWN_EFFECT_OPENING, "AWN_EFFECT_OPENING", "opening" },
        { AWN_EFFECT_CLOSING, "AWN_EFFECT_CLOSING", "closing" },
        { AWN_EFFECT_HOVER, "AWN_EFFECT_HOVER", "hover" },
        { AWN_EFFECT_LAUNCHING, "AWN_EFFECT_LAUNCHING", "launching" },
        { AWN_EFFECT_ATTENTION, "AWN_EFFECT_ATTENTION", "attention" },
        { AWN_EFFECT_DESATURATE, "AWN_EFFECT_DESATURATE", "desaturate" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static("AwnEffect", values);
    }
  return enum_type_id;
}
/* enumerations from "awn-overlay.h" */
#include "awn-overlay.h"
GType
awn_overlay_align_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { AWN_OVERLAY_ALIGN_CENTRE, "AWN_OVERLAY_ALIGN_CENTRE", "centre" },
        { AWN_OVERLAY_ALIGN_LEFT, "AWN_OVERLAY_ALIGN_LEFT", "left" },
        { AWN_OVERLAY_ALIGN_RIGHT, "AWN_OVERLAY_ALIGN_RIGHT", "right" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static("AwnOverlayAlign", values);
    }
  return enum_type_id;
}
/* enumerations from "anims/awn-effects-shared.h" */
#include "anims/awn-effects-shared.h"
GType
awn_arrow_type_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { AWN_ARROW_TYPE_CUSTOM, "AWN_ARROW_TYPE_CUSTOM", "custom" },
        { AWN_ARROW_TYPE_1, "AWN_ARROW_TYPE_1", "1" },
        { AWN_ARROW_TYPE_2, "AWN_ARROW_TYPE_2", "2" },
        { AWN_ARROW_TYPE_LAST, "AWN_ARROW_TYPE_LAST", "last" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static("AwnArrowType", values);
    }
  return enum_type_id;
}
GType
awn_effect_sequence_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { AWN_EFFECT_DIR_NONE, "AWN_EFFECT_DIR_NONE", "dir-none" },
        { AWN_EFFECT_DIR_STOP, "AWN_EFFECT_DIR_STOP", "dir-stop" },
        { AWN_EFFECT_DIR_DOWN, "AWN_EFFECT_DIR_DOWN", "dir-down" },
        { AWN_EFFECT_DIR_UP, "AWN_EFFECT_DIR_UP", "dir-up" },
        { AWN_EFFECT_DIR_LEFT, "AWN_EFFECT_DIR_LEFT", "dir-left" },
        { AWN_EFFECT_DIR_RIGHT, "AWN_EFFECT_DIR_RIGHT", "dir-right" },
        { AWN_EFFECT_SQUISH_DOWN, "AWN_EFFECT_SQUISH_DOWN", "squish-down" },
        { AWN_EFFECT_SQUISH_DOWN2, "AWN_EFFECT_SQUISH_DOWN2", "squish-down2" },
        { AWN_EFFECT_SQUISH_UP, "AWN_EFFECT_SQUISH_UP", "squish-up" },
        { AWN_EFFECT_SQUISH_UP2, "AWN_EFFECT_SQUISH_UP2", "squish-up2" },
        { AWN_EFFECT_TURN_1, "AWN_EFFECT_TURN_1", "turn-1" },
        { AWN_EFFECT_TURN_2, "AWN_EFFECT_TURN_2", "turn-2" },
        { AWN_EFFECT_TURN_3, "AWN_EFFECT_TURN_3", "turn-3" },
        { AWN_EFFECT_TURN_4, "AWN_EFFECT_TURN_4", "turn-4" },
        { AWN_EFFECT_SPOTLIGHT_ON, "AWN_EFFECT_SPOTLIGHT_ON", "spotlight-on" },
        { AWN_EFFECT_SPOTLIGHT_TREMBLE_UP, "AWN_EFFECT_SPOTLIGHT_TREMBLE_UP", "spotlight-tremble-up" },
        { AWN_EFFECT_SPOTLIGHT_TREMBLE_DOWN, "AWN_EFFECT_SPOTLIGHT_TREMBLE_DOWN", "spotlight-tremble-down" },
        { AWN_EFFECT_SPOTLIGHT_OFF, "AWN_EFFECT_SPOTLIGHT_OFF", "spotlight-off" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static("AwnEffectSequence", values);
    }
  return enum_type_id;
}

/* Generated data ends here */

