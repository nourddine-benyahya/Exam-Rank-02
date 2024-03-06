#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char    *dup;
    int     i;

    i = 0;
    while (src[i])
        i++;
    if (!(dup = (char *)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    i = 0;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}