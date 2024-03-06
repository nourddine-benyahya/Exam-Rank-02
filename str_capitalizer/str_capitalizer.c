#include <unistd.h>

int islatter(char a){return((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));}

int issep(char a){return(a == ' ' || a == '\t' || a == '\0');}

void ft_tolower(char *s)
{
    int i = 0;
    while (s[i]){
        (s[i] >= 'A' && s[i] <= 'Z')? s[i] = s[i] + 32 : 0 ;
        i++;}
}


int main(int argc, char *argv[])
{
    if (argc == 1)
        return (write(1, "\n", 1));

    int j, i =1;
    char c;
    while (i < argc)
    {
        j = 0;
        ft_tolower(argv[i]);
        while (issep(argv[i][j]))
            write(1, &argv[i][j++], 1);
        if (islatter(argv[i][j]))
        {
            c = argv[i][j++] - 32;
            write(1, &c, 1);
        }
        while (argv[i][j])
        {
            if (issep(argv[i][j]) && islatter(argv[i][j + 1]))
            {
                write(1, &argv[i][j++], 1);
                c = argv[i][j++] - 32;
                write(1, &c, 1);
            }else
                write(1, &argv[i][j++], 1);
        }
        i++;
        write(1, "\n", 1);
    }
}