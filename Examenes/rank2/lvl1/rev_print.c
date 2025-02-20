#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

int main(int argc, char *argv[])
{
    int len;
    int i = 0;
    if(argc == 2)
    {
        len = ft_strlen(argv[1]);
        while(argv[1][i] != '\0')
        {
            write(1, &argv[1][len - 1], 1);
            i++;
            len--;
        }
    }
    write(1, "\n", 1);
    return(0);
}