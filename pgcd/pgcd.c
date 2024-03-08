#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
    if (ac != 3)
        return (printf("\n"));
    int a = atoi(av[1]);
    int b = atoi(av[2]);

    if (a == b)
        printf("%d\n",a);
    int c = a > b ? b : a;

    while (c)
    {
        if (a % c == 0 && b % c == 0)
            return(printf("%d\n",c));
        c--;
    }
}