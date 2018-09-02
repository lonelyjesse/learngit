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
    while(len > 0)
    {
        printf("len = %d\n", len);
    }
    printf("hello\n");
    printf("strlen return\n");
    printf("this is a new day\n");
    return len;
}
