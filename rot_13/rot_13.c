#include <unistd.h>


int main(int argc, char *argv[])
{
    if (argc != 2)
        return (write(1, "\n",1));
    argv++;
    char c;
    while (**argv)
    {
        if ((**argv >= 'A' &&  **argv <= 'Z') || (**argv >= 'a' && **argv <= 'z')){
            if ((**argv <= 'M' && **argv >= 'A') || (**argv <='m' && **argv >= 'a'))
                c = **argv + 13;
            else
                c = **argv - 13;
            write(1,&c,1);
        }else
            write(1,&(**argv),1);
        (*argv)++;
    }
    return (write(1, "\n",1));
}