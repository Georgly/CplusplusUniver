#include "func.h"

Func::Func()
{

}

void *Func::memccpy(void *destination, const void *source, int c, int n)
{
    char* inner_source = (char*) source;
    char* dst = (char*) destination;
    int i = 0;
    while ( i < n && *inner_source != '\0')
    {
        *dst++ = *inner_source;
        if (*inner_source == c)
        {
            dst = '\0';
            return destination;
        }
        inner_source++;
        i++;
    }
    dst = '\0';

    return nullptr;
}

void *Func::memccpy2(void *destination, const void *source, int c, int n)
{
    int i = 0;
    while ( i < n && static_cast<const char*>(source)[i] != '\0')
    {
        static_cast<char*>(destination)[i] = static_cast<const char*>(source)[i];
        if (static_cast<const char*>(source)[i] == c)
        {
            return destination;
        }
        i++;
    }

    return nullptr;
}
