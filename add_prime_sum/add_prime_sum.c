#include <unistd.h>

int is_prime(int c){
    int i;

    i = 2;
    if (c == 1)
        return (0);
    while (i <= c / 2)
    {
        if (c % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int strtonbr(char *str)
{
    int res = 0;
    while (*str)
        res = (res * 10) + (*str++ - '0');
    return (res);
}

void putnbr(int a)
{
    char c;
    if (a < 10){
        c = a + '0';
        write(1, &c, 1);
    }
    else{
        c = (a % 10) + '0';
        putnbr(a / 10);
        write(1, &c, 1);
    }
    
}

int main(int argc, char *argv[])
{
    if (argc != 2 || argv[1] <= 0)
        return(write(1,"0\n",2));
    int sum = 0;
    int i = 0;
    int nbr = strtonbr(argv[1]);
    while (i <= nbr)
        sum += is_prime(i) ? i++ : 0 * i++;
    putnbr(sum);
    write(1, "\n", 1);
    return (0);
}