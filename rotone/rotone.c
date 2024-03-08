#include <unistd.h>

void rotone(char *str) {
    char c;
    while (*str) {
        if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y')) {
            c = *str + 1;
            write(1, &c, 1);
        } else if (*str == 'z' || *str == 'Z') {
            c = *str - 25;
            write(1, &c, 1);
        } else {
            write(1, str, 1);
        }
        str++;
    }
}

int main(int argc, char **argv) {
    if (argc == 2) {
        rotone(argv[1]);
    }
    write(1, "\n", 1);
    return 0;
}
