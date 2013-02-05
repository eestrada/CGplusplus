#if !defined(CGTYPEDEFS_HPP)
#define CGTYPEDEFS_HPP

/*
 * This file needs to be updated to use more accurate typedefs.
 * This file currently assumes compilation on Linux on x86_64.
 */

#if defined(_LP64)
typedef char int8;
typedef unsigned char uint8;
typedef short int int16;
typedef unsigned short int uint16;
typedef int int32;
typedef unsigned int uint32;
typedef long int int64;
typedef unsigned long int uint64;
#endif //For _LP64 typedefs

/* 
 * Eventually real16 will be a class or struct that only occupies 16 bits.
 * For now it is simply typedefed as a float.
 */
typedef float real16; 
typedef float real32;
typedef double real64;
typedef long double real128; // On x86 this is only 80 bits wide, not 128.
typedef real32 real; // Real is a bit agnostic type. This should be used in most circumstances.

#endif // defined CGTYPEDEFS_HPP
