#ifndef IDJL_VXWORKS_MISSING_FUNCTIONS_H_
#define IDJL_VXWORKS_MISSING_FUNCTIONS_H_

#include <cstdlib>
#include <ioLib.h>

inline float strtof(const char* str, char** endptr)
{
    return static_cast<float>(strtod(str, endptr));
}

namespace std 
{

inline bool isnan(double x)
{
    return (x != x);
}

inline bool isinf(double x)
{
    return ((x * 0) != 0 && !isnan(x));
}

inline float strtof(const char* str, char** endptr)
{
    return strtof(str,endptr);
}

}

inline int open(const char *pathname, int flags) 
{
    return open(pathname, flags, 0);
}

#endif 