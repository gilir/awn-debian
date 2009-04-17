
/* Generated data (by glib-mkenums) */

#include "egg-enum-types.h"
/* enumerations from "eggdesktopfile.h" */
#include "eggdesktopfile.h"
GType
egg_desktop_file_type_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { EGG_DESKTOP_FILE_TYPE_UNRECOGNIZED, "EGG_DESKTOP_FILE_TYPE_UNRECOGNIZED", "unrecognized" },
        { EGG_DESKTOP_FILE_TYPE_APPLICATION, "EGG_DESKTOP_FILE_TYPE_APPLICATION", "application" },
        { EGG_DESKTOP_FILE_TYPE_LINK, "EGG_DESKTOP_FILE_TYPE_LINK", "link" },
        { EGG_DESKTOP_FILE_TYPE_DIRECTORY, "EGG_DESKTOP_FILE_TYPE_DIRECTORY", "directory" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static("EggDesktopFileType", values);
    }
  return enum_type_id;
}
GType
egg_desktop_file_launch_option_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { EGG_DESKTOP_FILE_LAUNCH_CLEARENV, "EGG_DESKTOP_FILE_LAUNCH_CLEARENV", "clearenv" },
        { EGG_DESKTOP_FILE_LAUNCH_PUTENV, "EGG_DESKTOP_FILE_LAUNCH_PUTENV", "putenv" },
        { EGG_DESKTOP_FILE_LAUNCH_SCREEN, "EGG_DESKTOP_FILE_LAUNCH_SCREEN", "screen" },
        { EGG_DESKTOP_FILE_LAUNCH_WORKSPACE, "EGG_DESKTOP_FILE_LAUNCH_WORKSPACE", "workspace" },
        { EGG_DESKTOP_FILE_LAUNCH_DIRECTORY, "EGG_DESKTOP_FILE_LAUNCH_DIRECTORY", "directory" },
        { EGG_DESKTOP_FILE_LAUNCH_TIME, "EGG_DESKTOP_FILE_LAUNCH_TIME", "time" },
        { EGG_DESKTOP_FILE_LAUNCH_FLAGS, "EGG_DESKTOP_FILE_LAUNCH_FLAGS", "flags" },
        { EGG_DESKTOP_FILE_LAUNCH_SETUP_FUNC, "EGG_DESKTOP_FILE_LAUNCH_SETUP_FUNC", "setup-func" },
        { EGG_DESKTOP_FILE_LAUNCH_RETURN_PID, "EGG_DESKTOP_FILE_LAUNCH_RETURN_PID", "return-pid" },
        { EGG_DESKTOP_FILE_LAUNCH_RETURN_STDIN_PIPE, "EGG_DESKTOP_FILE_LAUNCH_RETURN_STDIN_PIPE", "return-stdin-pipe" },
        { EGG_DESKTOP_FILE_LAUNCH_RETURN_STDOUT_PIPE, "EGG_DESKTOP_FILE_LAUNCH_RETURN_STDOUT_PIPE", "return-stdout-pipe" },
        { EGG_DESKTOP_FILE_LAUNCH_RETURN_STDERR_PIPE, "EGG_DESKTOP_FILE_LAUNCH_RETURN_STDERR_PIPE", "return-stderr-pipe" },
        { EGG_DESKTOP_FILE_LAUNCH_RETURN_STARTUP_ID, "EGG_DESKTOP_FILE_LAUNCH_RETURN_STARTUP_ID", "return-startup-id" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static("EggDesktopFileLaunchOption", values);
    }
  return enum_type_id;
}
GType
egg_desktop_file_error_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { EGG_DESKTOP_FILE_ERROR_INVALID, "EGG_DESKTOP_FILE_ERROR_INVALID", "invalid" },
        { EGG_DESKTOP_FILE_ERROR_NOT_LAUNCHABLE, "EGG_DESKTOP_FILE_ERROR_NOT_LAUNCHABLE", "not-launchable" },
        { EGG_DESKTOP_FILE_ERROR_UNRECOGNIZED_OPTION, "EGG_DESKTOP_FILE_ERROR_UNRECOGNIZED_OPTION", "unrecognized-option" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static("EggDesktopFileError", values);
    }
  return enum_type_id;
}

/* Generated data ends here */

