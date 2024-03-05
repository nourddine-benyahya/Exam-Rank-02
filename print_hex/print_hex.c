#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i++]);
    return (i - 1);
}

int strtonbr(char *str){
    int res = 0;

    while (*str)
        res = res * 10 + *str++ - '0';
    return (res);
}


void puthexa(int nbr)
{
    char c;
    if (nbr <= 9)
    {
        c = nbr + '0';
        write(1,&c,1);
    }
    else if (nbr <= 15)
    {
        c = nbr + 'a' - 10;
        write(1,&c,1);
    }
    else{
        puthexa(nbr / 16);
        puthexa(nbr % 16);
    }

}

int main(int argc, char *argv[])
{
    if (argc != 2)
        write(1,"\n",1);
    puthexa(strtonbr(argv[1]));
    write(1,"\n",1);
}