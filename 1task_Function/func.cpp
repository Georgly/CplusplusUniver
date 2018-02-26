#include "func.h"

func::func()
{

}

void *func::memccpy(void *destination, const void *source, int c, int n)
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
