#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int len;
    char *p;
    char *str;

    len = 0;
    while(src[len])
        len++;
    str = (char *)malloc(len+1);
    p = str;
    while(*src)
        *p++ = *src++;
    *p = '\0';
    printf("%s\n %d ", str, len+1);
    return str;
}

int main( )
{
    ft_strdup("abcdefg");
}