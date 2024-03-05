#include <unistd.h>
// #include <stdio.h>


void putstr(char *str){
	while (*str && *str != ' ' && *str != '\t')
		write(1,&(*str++),1);
}
int	ft_strlen(char *str){
	int i = 0;
	while (str[++i]);
	return (i);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return(write(1,"\n",1));
	int len = ft_strlen(argv[1]);
	while (len--){
		if (argv[1][len] == ' ' || argv[1][len] == '\t'){
			putstr(argv[1] + len + 1);
			write(1,&argv[1][len],1);
		}
	}
	putstr(argv[1]);
	write(1,"\n",1);
}