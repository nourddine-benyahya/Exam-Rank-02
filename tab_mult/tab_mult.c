#include <unistd.h>
int strtonbr(char *str)
{
    int res = 0;
    while (*str)
        res = (res * 10) + (*str++ - '0');
    return (res);
}

void putnbr(int nbr)
{
    if (nbr >= 10)
        putnbr(nbr / 10);
    char c = (nbr % 10) + '0';
    write(1, &c, 1);
}


int main(int argc, char *argv[])
{
    if (argc != 2)
        return (write(1, "\n", 1));

    int nbr = strtonbr(argv[1]);
    int i = 1;

    while (i <= 9)
    {
        putnbr(i);
        write(1, " x ", 3);
        putnbr(nbr);
        write(1, " = ", 3);
        putnbr(nbr * i);
        write(1, "\n", 1);
        i++;
    }
}