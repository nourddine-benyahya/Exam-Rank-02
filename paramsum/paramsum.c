#include <unistd.h>


void putnbr(int a)
{
    char c;
    if (a < 10){
        c = a + '0';
        write(1, &c, 1);
    }
    else
    {
        c = ((a % 10) + '0');
        putnbr(a / 10);
        write(1,&c, 1);
    }
}



int main(int argc, char *argv[])
{
    (void)argv;
    putnbr(argc - 1);
    write(1, "\n", 1);
}