#include <stdio.h>
 
char* strcpy(char* dest, const char* src)
{
    if (dest == NULL) {
        return NULL;
    }
    char *ret = dest;
 
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
 
    *dest = '\0';
    return ret;
}
 