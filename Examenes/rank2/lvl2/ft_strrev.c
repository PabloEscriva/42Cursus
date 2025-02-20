char    *ft_strrev(char *str)
{
    int i = 0;
    int m = 0;
    char aux;

    while(str[i])
        i++;
    i--;
    while(i > m)
    {
        aux = str[m];
        str[m] = str[i];
        str[i] = aux;
        i--;
        m++;
    }
    return(str);
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("%s", ft_strrev(argv[1]));
}