#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.demo"), aligned (sizeof(void *) > 8 ? sizeof(void *) : 8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[1462]; const double alignment; void * const ptr;}  demo_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0130, 0000, 0000, 0000, 0000, 0000, 0000, 0050, 0002, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 
  0130, 0000, 0000, 0000, 0001, 0000, 0114, 0000, 0134, 0000, 0000, 0000, 0140, 0000, 0000, 0000, 
  0145, 0102, 0024, 0341, 0000, 0000, 0000, 0000, 0140, 0000, 0000, 0000, 0007, 0000, 0166, 0000, 
  0150, 0000, 0000, 0000, 0265, 0005, 0000, 0000, 0057, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 
  0144, 0145, 0155, 0157, 0056, 0165, 0151, 0000, 0102, 0051, 0000, 0000, 0001, 0000, 0000, 0000, 
  0170, 0332, 0335, 0132, 0333, 0162, 0243, 0070, 0020, 0175, 0337, 0252, 0375, 0007, 0212, 0167, 
  0102, 0234, 0144, 0252, 0366, 0201, 0060, 0225, 0313, 0316, 0136, 0152, 0062, 0223, 0331, 0170, 
  0166, 0037, 0247, 0144, 0120, 0100, 0033, 0041, 0061, 0222, 0360, 0345, 0357, 0267, 0021, 0304, 
  0027, 0054, 0201, 0041, 0304, 0223, 0332, 0052, 0077, 0130, 0100, 0237, 0076, 0335, 0247, 0045, 
  0241, 0266, 0203, 0367, 0313, 0214, 0072, 0163, 0054, 0044, 0341, 0354, 0322, 0235, 0234, 0234, 
  0272, 0016, 0146, 0021, 0217, 0011, 0113, 0056, 0335, 0257, 0323, 0017, 0336, 0057, 0356, 0373, 
  0360, 0347, 0237, 0002, 0302, 0024, 0026, 0217, 0050, 0302, 0060, 0160, 0234, 0200, 0317, 0376, 
  0305, 0221, 0162, 0042, 0212, 0244, 0274, 0164, 0177, 0123, 0117, 0037, 0211, 0124, 0017, 0212, 
  0013, 0354, 0072, 0044, 0276, 0164, 0051, 0014, 0145, 0071, 0234, 0270, 0332, 0000, 0114, 0042, 
  0116, 0213, 0214, 0311, 0172, 0270, 0276, 0340, 0250, 0125, 0216, 0057, 0335, 0044, 0112, 0221, 
  0100, 0102, 0240, 0225, 0353, 0277, 0340, 0021, 0240, 0331, 0307, 0076, 0360, 0167, 0131, 0005, 
  0061, 0122, 0150, 0143, 0056, 0370, 0142, 0075, 0250, 0320, 0164, 0160, 0220, 0043, 0045, 0020, 
  0223, 0024, 0036, 0236, 0121, 0100, 0136, 0141, 0351, 0206, 0177, 0362, 0224, 0151, 0074, 0223, 
  0311, 0304, 0150, 0162, 0313, 0261, 0325, 0342, 0314, 0015, 0317, 0336, 0131, 0357, 0236, 0033, 
  0361, 0246, 0051, 0221, 0016, 0174, 0124, 0212, 0235, 0222, 0216, 0003, 0016, 0034, 0010, 0142, 
  0027, 0046, 0360, 0267, 0343, 0352, 0027, 0344, 0035, 0022, 0253, 0236, 0101, 0176, 0145, 0117, 
  0214, 0057, 0130, 0133, 0240, 0357, 0116, 0137, 0020, 0150, 0111, 0311, 0251, 0235, 0264, 0007, 
  0033, 0370, 0153, 0171, 0003, 0277, 0252, 0340, 0152, 0220, 0141, 0126, 0150, 0157, 0345, 0227, 
  0031, 0022, 0353, 0232, 0225, 0305, 0254, 0274, 0264, 0101, 0103, 0112, 0011, 0062, 0053, 0024, 
  0166, 0030, 0312, 0200, 0015, 0105, 0063, 0114, 0215, 0024, 0277, 0175, 0040, 0024, 0324, 0135, 
  0033, 0154, 0060, 0044, 0370, 0205, 0331, 0266, 0035, 0055, 0121, 0070, 0333, 0032, 0367, 0163, 
  0364, 0011, 0057, 0114, 0176, 0214, 0060, 0110, 0273, 0166, 0303, 0005, 0141, 0047, 0314, 0146, 
  0027, 0370, 0015, 0076, 0057, 0343, 0367, 0071, 0307, 0154, 0020, 0101, 0156, 0065, 0034, 0231, 
  0341, 0003, 0232, 0343, 0101, 0014, 0245, 0325, 0160, 0134, 0206, 0045, 0101, 0347, 0333, 0225, 
  0034, 0114, 0322, 0103, 0362, 0040, 0236, 0201, 0337, 0254, 0316, 0321, 0313, 0365, 0113, 0101, 
  0324, 0240, 0070, 0276, 0133, 0015, 0073, 0202, 0200, 0361, 0316, 0074, 0176, 0321, 0264, 0376, 
  0065, 0066, 0263, 0030, 0075, 0117, 0067, 0074, 0137, 0015, 0312, 0123, 0144, 0065, 0034, 0171, 
  0332, 0334, 0024, 0303, 0204, 0214, 0012, 0165, 0024, 0176, 0367, 0110, 0252, 0141, 0363, 0072, 
  0267, 0133, 0036, 0263, 0326, 0256, 0030, 0242, 0053, 0111, 0344, 0121, 0352, 0355, 0136, 0140, 
  0031, 0011, 0222, 0227, 0240, 0303, 0222, 0326, 0011, 0060, 0262, 0276, 0267, 0002, 0015, 0333, 
  0371, 0142, 0253, 0341, 0350, 0025, 0050, 0320, 0222, 0040, 0072, 0260, 0010, 0333, 0214, 0307, 
  0145, 0372, 0107, 0206, 0022, 0330, 0141, 0276, 0024, 0210, 0022, 0065, 0154, 0331, 0041, 0045, 
  0204, 0367, 0275, 0015, 0341, 0230, 0163, 0147, 0312, 0071, 0075, 0306, 0274, 0271, 0137, 0251, 
  0224, 0063, 0007, 0226, 0153, 0046, 0071, 0035, 0270, 0334, 0150, 0014, 0057, 0152, 0203, 0070, 
  0146, 0356, 0376, 0046, 0346, 0127, 0303, 0261, 0163, 0127, 0372, 0161, 0140, 0222, 0044, 0303, 
  0322, 0066, 0007, 0163, 0057, 0267, 0132, 0037, 0063, 0143, 0277, 0143, 0232, 0037, 0145, 0225, 
  0266, 0071, 0352, 0114, 0126, 0152, 0065, 0034, 0171, 0315, 0273, 0232, 0361, 0201, 0357, 0005, 
  0310, 0156, 0331, 0113, 0313, 0300, 0337, 0174, 0335, 0153, 0124, 0150, 0172, 0267, 0260, 0254, 
  0362, 0244, 0152, 0125, 0150, 0257, 0261, 0276, 0260, 0151, 0126, 0344, 0002, 0016, 0037, 0102, 
  0255, 0152, 0226, 0060, 0114, 0004, 0312, 0274, 0162, 0144, 0214, 0372, 0272, 0040, 0064, 0306, 
  0302, 0211, 0161, 0306, 0003, 0377, 0331, 0332, 0202, 0006, 0236, 0270, 0107, 0140, 0266, 0333, 
  0361, 0270, 0110, 0116, 0022, 0365, 0164, 0162, 0013, 0170, 0027, 0235, 0200, 0031, 0217, 0021, 
  0205, 0123, 0261, 0050, 0160, 0343, 0331, 0335, 0163, 0356, 0136, 0062, 0376, 0041, 0054, 0346, 
  0213, 0052, 0017, 0013, 0375, 0335, 0232, 0202, 0030, 0077, 0242, 0202, 0052, 0057, 0305, 0044, 
  0111, 0125, 0331, 0234, 0070, 0355, 0344, 0365, 0154, 0263, 0040, 0261, 0112, 0335, 0360, 0342, 
  0242, 0333, 0104, 0021, 0105, 0133, 0123, 0274, 0217, 0020, 0245, 0160, 0143, 0123, 0032, 0173, 
  0101, 0136, 0363, 0145, 0025, 0341, 0174, 0306, 0227, 0353, 0370, 0114, 0316, 0271, 0040, 0230, 
  0051, 0124, 0125, 0344, 0034, 0156, 0220, 0250, 0334, 0176, 0033, 0016, 0015, 0116, 0315, 0216, 
  0357, 0171, 0316, 0001, 0345, 0016, 0212, 0361, 0032, 0011, 0167, 0273, 0303, 0260, 0103, 0303, 
  0050, 0051, 0074, 0347, 0201, 0256, 0060, 0313, 0302, 0332, 0306, 0110, 0244, 0232, 0124, 0121, 
  0204, 0245, 0044, 0063, 0122, 0156, 0275, 0215, 0233, 0206, 0362, 0323, 0163, 0067, 0274, 0103, 
  0204, 0071, 0045, 0067, 0073, 0256, 0157, 0007, 0336, 0051, 0254, 0347, 0113, 0315, 0244, 0034, 
  0224, 0245, 0265, 0074, 0012, 0166, 0354, 0103, 0122, 0363, 0114, 0212, 0142, 0117, 0300, 0166, 
  0351, 0206, 0265, 0241, 0075, 0216, 0006, 0100, 0044, 0245, 0247, 0375, 0227, 0145, 0325, 0151, 
  0074, 0050, 0271, 0323, 0056, 0124, 0277, 0015, 0326, 0220, 0067, 0113, 0356, 0012, 0245, 0312, 
  0132, 0155, 0076, 0151, 0343, 0145, 0232, 0127, 0272, 0175, 0144, 0241, 0151, 0234, 0241, 0020, 
  0232, 0042, 0271, 0247, 0360, 0122, 0031, 0001, 0157, 0004, 0106, 0260, 0276, 0043, 0207, 0301, 
  0356, 0376, 0250, 0273, 0140, 0075, 0340, 0067, 0353, 0142, 0030, 0363, 0250, 0200, 0332, 0127, 
  0036, 0353, 0111, 0261, 0332, 0124, 0152, 0224, 0165, 0253, 0313, 0012, 0140, 0250, 0145, 0163, 
  0075, 0037, 0135, 0233, 0252, 0165, 0066, 0246, 0070, 0045, 0042, 0110, 0063, 0212, 0054, 0274, 
  0057, 0273, 0075, 0135, 0072, 0020, 0336, 0256, 0060, 0125, 0307, 0160, 0114, 0141, 0164, 0213, 
  0157, 0044, 0141, 0144, 0137, 0166, 0173, 0302, 0164, 0040, 0274, 0216, 0060, 0017, 0270, 0074, 
  0362, 0052, 0056, 0266, 0176, 0302, 0171, 0063, 0212, 0127, 0355, 0270, 0121, 0327, 0111, 0100, 
  0164, 0044, 0246, 0300, 0025, 0307, 0116, 0115, 0232, 0060, 0305, 0365, 0317, 0032, 0021, 0045, 
  0371, 0214, 0043, 0021, 0017, 0255, 0006, 0034, 0023, 0345, 0105, 0175, 0131, 0357, 0125, 0102, 
  0007, 0302, 0333, 0235, 0242, 0272, 0073, 0071, 0252, 0136, 0205, 0172, 0165, 0271, 0172, 0162, 
  0336, 0127, 0253, 0025, 0340, 0355, 0212, 0125, 0267, 0152, 0307, 0224, 0113, 0103, 0076, 0353, 
  0364, 0050, 0170, 0066, 0242, 0116, 0171, 0157, 0272, 0173, 0112, 0165, 0101, 0364, 0320, 0152, 
  0274, 0167, 0361, 0207, 0010, 0336, 0250, 0051, 0216, 0267, 0317, 0205, 0262, 0276, 0326, 0070, 
  0037, 0332, 0002, 0115, 0221, 0364, 0036, 0205, 0016, 0163, 0162, 0360, 0033, 0171, 0212, 0227, 
  0071, 0142, 0161, 0037, 0223, 0371, 0001, 0046, 0207, 0126, 0360, 0124, 0140, 0134, 0366, 0242, 
  0352, 0163, 0010, 0214, 0312, 0326, 0322, 0344, 0220, 0222, 0256, 0217, 0150, 0233, 0377, 0073, 
  0014, 0052, 0342, 0352, 0137, 0010, 0156, 0170, 0336, 0156, 0155, 0216, 0247, 0075, 0246, 0233, 
  0012, 0132, 0107, 0126, 0271, 0061, 0306, 0145, 0077, 0213, 0207, 0237, 0140, 0320, 0312, 0253, 
  0203, 0233, 0231, 0337, 0015, 0246, 0364, 0057, 0314, 0340, 0104, 0217, 0305, 0124, 0317, 0341, 
  0222, 0241, 0250, 0257, 0114, 0366, 0136, 0001, 0114, 0075, 0044, 0151, 0175, 0306, 0320, 0151, 
  0322, 0013, 0105, 0170, 0152, 0353, 0114, 0065, 0116, 0147, 0135, 0056, 0314, 0153, 0146, 0353, 
  0324, 0155, 0067, 0033, 0111, 0334, 0263, 0236, 0342, 0076, 0024, 0202, 0375, 0000, 0175, 0317, 
  0136, 0113, 0337, 0311, 0377, 0134, 0337, 0363, 0236, 0372, 0136, 0045, 0107, 0327, 0366, 0374, 
  0265, 0264, 0075, 0173, 0233, 0332, 0376, 0220, 0235, 0372, 0143, 0365, 0052, 0245, 0067, 0150, 
  0205, 0124, 0041, 0017, 0351, 0234, 0055, 0021, 0045, 0011, 0323, 0213, 0340, 0201, 0273, 0154, 
  0206, 0104, 0102, 0230, 0007, 0056, 0104, 0045, 0100, 0077, 0073, 0134, 0156, 0320, 0275, 0255, 
  0024, 0317, 0007, 0130, 0315, 0070, 0274, 0206, 0146, 0166, 0303, 0003, 0162, 0337, 0170, 0144, 
  0373, 0366, 0326, 0255, 0300, 0337, 0376, 0063, 0344, 0177, 0021, 0161, 0304, 0251, 0000, 0050, 
  0165, 0165, 0141, 0171, 0051
} };

static GStaticResource static_resource = { demo_resource_data.data, sizeof (demo_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *demo_get_resource (void);
GResource *demo_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/* GLIB - Library of useful routines for C programming
 * Copyright (C) 1995-1997  Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Modified by the GLib Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GLib Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GLib at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __G_CONSTRUCTOR_H__
#define __G_CONSTRUCTOR_H__

/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER)

/*
 * Only try to include gslist.h if not already included via glib.h,
 * so that items using gconstructor.h outside of GLib (such as
 * GResources) continue to build properly.
 */
#ifndef __G_LIB_H__
#include "gslist.h"
#endif

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */
#endif /* __G_CONSTRUCTOR_H__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(demoresource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(demoresource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(demoresource_destructor)
#endif
G_DEFINE_DESTRUCTOR(demoresource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void demoresource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void demoresource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
