#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    ft_alpha_mirror(char c)
{
    if (c >= 'a' && c <= 'z')
        return ('z' - (c - 'a'));
    else if (c >= 'A' && c <= 'Z')
        return ('Z' - (c - 'A'));
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
            ft_putchar(ft_alpha_mirror(argv[1][i]));
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}