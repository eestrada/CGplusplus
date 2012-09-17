#if !defined(CGTYPEDEFS_HPP)
#define CGTYPEDEFS_HPP

#include <limits> 
/*
 * This file needs to be modified to use the templates found in <limits>
 * to figure out what the typedefs should be. The #defines are a bit
 * hacky for my taste.
 */

#if defined(_LP64)
typedef int sint32;
typedef unsigned int uint32;
typedef long int sint64;
typedef unsigned long int uint64;
#endif //For _LP64 typedefs

#endif // For if statement defining CGTYPEDEFS_HPP
