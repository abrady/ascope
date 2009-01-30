/* config.h.in.  Generated from configure.in by autoheader.  */

/* We're using a BSD-flavoured Unix */
#undef BSD

/* Found some version of curses that we're going to use */
#undef HAS_CURSES

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#undef HAVE_DIRENT_H

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fixkeypad' function. */
#undef HAVE_FIXKEYPAD

/* Define to 1 if you have the <floss.h> header file. */
#undef HAVE_FLOSS_H

/* Define to 1 if you have the `getcwd' function. */
#undef HAVE_GETCWD

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the <io.h> header file. */
#undef HAVE_IO_H

/* Define to 1 if you have the `regex' library (-lregex). */
#undef HAVE_LIBREGEX

/* Define to 1 if you have the `lstat' function. */
#undef HAVE_LSTAT

/* Define to 1 if `lstat' has the bug that it succeeds when given the
   zero-length file name argument. */
#undef HAVE_LSTAT_EMPTY_STRING_BUG

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
#undef HAVE_NDIR_H

/* Define to 1 if you have the `regcmp' function. */
#undef HAVE_REGCMP

/* Define to 1 if you have the `regcomp' function. */
#undef HAVE_REGCOMP

/* Define to 1 if you have the `setmode' function. */
#undef HAVE_SETMODE

/* Define to 1 if you have the <signal.h> header file. */
#undef HAVE_SIGNAL_H

/* Define if we have sigsetjmp(). */
#undef HAVE_SIGSETJMP

/* Define to 1 if you have the `snprintf' function. */
#undef HAVE_SNPRINTF

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the `strchr' function. */
#undef HAVE_STRCHR

/* Define to 1 if you have the `strerror' function. */
#undef HAVE_STRERROR

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_DIR_H

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_NDIR_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/termios.h> header file. */
#undef HAVE_SYS_TERMIOS_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the <sys/window.h> header file. */
#undef HAVE_SYS_WINDOW_H

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the `vsnprintf' function. */
#undef HAVE_VSNPRINTF

/* Define to 1 if you have the `_setmode' function. */
#undef HAVE__SETMODE

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
#undef LSTAT_FOLLOWS_SLASHED_SYMLINK

/* We're using some variant of Linux */
#undef Linux

/* Set to reflect version of ncurses: 0 = version 1.* 1 = version 1.9.9g 2 =
   version 4.0/4.1 */
#undef NCURSES_970530

/* If your Curses does not have color define this one */
#undef NO_COLOR_CURSES

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Define as the return type of signal handlers (`int' or `void'). */
#undef RETSIGTYPE

/* Define if you want to turn on SCO-specific code */
#undef SCO_FLAVOR

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Use Ncurses? */
#undef USE_NCURSES

/* Use SunOS SysV curses? */
#undef USE_SUNOS_CURSES

/* Use SystemV curses? */
#undef USE_SYSV_CURSES

/* Define this if the scanner is run through lex, not flex */
#undef USING_LEX

/* Version number of package */
#undef VERSION

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#undef YYTEXT_POINTER

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `int' if <sys/types.h> does not define. */
#define mode_t int

/* Define to `int' if <sys/types.h> does not define. */
#undef pid_t

/* Define to `unsigned' if <sys/types.h> does not define. */
#undef size_t


#ifdef WIN32
#include <direct.h>     // getcwd
#include <io.h>         // access
#include <process.h>    // spawnvp
#define R_OK 0x04       // for access()
#define __MSDOS__

#pragma warning(disable:4996) // strcpy unsafe
#pragma warning(disable:4267) // size_t to int mismatch
#pragma warning(disable:4244) // long to char convert
#pragma warning(disable:4018) // sign/unsign mismatch
#pragma warning(disable:4101) // unused variables

//#pragma warning(disable:4996 4101 4267 4244 4018)
#define S_ISREG(B) ((B)&_S_IFREG)
#define S_ISDIR(B) ((B)&_S_IFDIR)
typedef int pid_t;

// comment this if you don't want to use pdcurses on win32
#define CURSES_WIN32_STUBS
#ifndef CURSES_WIN32_STUBS
#define CURSES_WIN32_STUBS
__forceinline void refresh() {} 
__forceinline void wrefresh(int a) {}
__forceinline void move(int a,int b) {} 
__forceinline void clearok(int a,int b) {} 
__forceinline void clear () {} 
__forceinline void clrtoeol() {}
__forceinline void addch(char c) {}
#define addstr printf
#define LINES 300
#define COLS 120
#define curscr 0
#endif // CURSES_WIN32_STUBS

#endif // WIN32
