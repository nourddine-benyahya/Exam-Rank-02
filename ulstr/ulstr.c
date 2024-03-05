#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    ft_reverse_case(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    else if (c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
}

int     main(int argc, char *argv[])
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            ft_putchar(ft_reverse_case(argv[1][i]));
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}