#include <stdio.h>
#include <stdlib.h>
int intlens(int nbr)
{
    int res = 0;

    if (nbr < 0)
        res++;
    if (nbr == 0)
        return(1);
    while (nbr != 0){
        nbr = nbr / 10;
        res++;
    }
    return (res);
}




char	*ft_itoa(int nbr)
{
    int intlen = intlens(nbr);
    char *str = malloc(intlen + 1);
    str[intlen] = '\0';
    if (nbr == 0)
        return (str[0] = '0',str);
    if (nbr == -2147483648)
    {
        str[intlen - 1] = '8';
        nbr = -214748364;
        intlen--;
    }
    if (nbr < 0)
    {
        str[0] = '-';
        nbr = nbr * -1;
    }
    while(intlen-- && nbr){
        str[intlen] = (nbr % 10) + '0';
        nbr = nbr / 10;
    }
    return(str);
}

// int main()
// {
//     printf("%s\n",ft_itoa(0));
// }
