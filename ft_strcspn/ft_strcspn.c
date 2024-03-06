#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t j;
    size_t i=0;
    while (s[i])
    {
        j = 0;
        while (reject[j]){
            if (reject[j] == s[i])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
