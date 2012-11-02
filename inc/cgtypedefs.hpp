#if !defined(CGTYPEDEFS_HPP)
#define CGTYPEDEFS_HPP

#include <limits> 
/*
 * This file needs to be modified to use the templates found in <limits>
 * to figure out what the typedefs should be. The #defines are a bit
 * hacky for my taste.
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

typedef float float16; // Eventually this will be a class or struct.
typedef float float32;
typedef double float64;
typedef long double float80;

#endif // CGTYPEDEFS_HPP
