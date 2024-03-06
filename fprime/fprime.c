#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(int ac, char **av)
{
    if (ac != 2)
        return(printf("\n"));
    
    int i = 2;
    int nbr = atoi(av[1]);

    if (nbr == 1)
        return(printf("1\n"));

    while (nbr >= i)
    {
        if (nbr % i == 0){
            printf("%d", i);
            if (nbr != i)
                printf("*");
             nbr /= i;
            i--;
        }
        i++;
    }
    printf("\n");
}