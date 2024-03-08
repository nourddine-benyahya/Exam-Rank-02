#include <unistd.h>
int main(int ac, char *av[])
{
    if (ac != 2)
        return(write(1,"\n",1));
    int i;
    char c;
    i = 0;
    while (av[1][i])
    {
        if(av[1][i] == '_' && av[1][i + 1] >= 'a' && av[1][i + 1] <= 'z' ){
            i++;
            c = av[1][i] - 32;
            write(1,&c,1);
        }else
            write(1,&av[1][i],1);
        i++;
    }
    write(1,"\n",1);
}
