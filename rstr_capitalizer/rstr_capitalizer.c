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
    int i = 0;
    int j = 1;
    char a;

    if (argc == 1)
        return (write(1, "\n", 1));
    while (argc > j){
        i = 0;
        ft_tolower(argv[j]);
        while (argv[j][i])
        {
            if (issep(argv[j][i + 1]) && islatter(argv[j][i]))
            {
                a = argv[j][i++] - 32;
                write(1, &a, 1);
            }else
                write(1, &argv[j][i++], 1);
        }
        write(1,"\n",1);
        j++;
    }
}