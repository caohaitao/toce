/****************************************************************
**
**  File: oce_build_paths.h.cmake, build-inc/oce-paths.h
**
**  This configuration header is used to build OCE. It is
**  not installed.
**
****************************************************************/


/* Location where resource files will be installed. */
#define OCE_INSTALL_DATA_DIR "c:/OCE-0.18-dev/share/oce"

/* Debug prefix, postfix and extension for DLLs */
#define OCE_LIBRARY_PREFIX ""
#define OCE_LIBRARY_EXTENSION ".dll"

/* Debug postfix for DLLs */
#if defined(_MSC_VER)
#if defined(_DEBUG)
#define OCE_LIBRARY_DEBUG_POSTFIX "d"
#else
#define OCE_LIBRARY_DEBUG_POSTFIX ""
#endif
#else
#define OCE_LIBRARY_DEBUG_POSTFIX ""
#endif

