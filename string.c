#include <string.h>


int strlen(unsigned char *str)
{
    int len = 0;

    if (str ==  NULL)
    {
        return -1;
    }
    while(*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}
