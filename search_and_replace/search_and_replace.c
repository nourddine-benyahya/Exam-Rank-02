#include <unistd.h>
int main(int argc, char *argv[])
{
    if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
        return (write(1,"\n",1));
    argv++;
    while (**argv){
        if (**argv == argv[1][0])
            write(1,&argv[2][0],1);
        else
            write(1,&(**argv),1);
        (*argv)++;
    }
    write(1,"\n",1);
}