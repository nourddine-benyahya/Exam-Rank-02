#include <unistd.h>

int issep(char a){return(a == ' ' || a == '\t' || a == '\0');}


int main(int argc, char *argv[]){

    if (argc == 1)
        return (write(1, "\n", 1));

    int i = 0;
    while (issep(argv[1][i]))
        i++;
    while (!issep(argv[1][i]))
        i++;
    while (argv[1][i] && issep(argv[1][i]))
        i++;
    if (argv[1][i]){
        while (argv[1][i])
        {
            if (argv[1][i] && issep(argv[1][i]) && !issep(argv[1][i + 1]))
                write(1, " ",1);
            else if(argv[1][i] && !issep(argv[1][i]))
                write(1, &(argv[1][i]),1);
            i++;
        }
        write(1, " ", 1);
    }
    i = 0;
    while (argv[1][i] && issep(argv[1][i]))
        i++;
    while ( !issep(argv[1][i]))
        write(1, &(argv[1][i++]),1);
    write(1, "\n", 1);

}