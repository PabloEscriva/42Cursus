#include <stdlib.h>
#include <stdio.h>

int nbr_lenght(int nbr)
{
    int i = 0;
    if(nbr == 0)
        return(1);
    while(nbr != 0)
    {
        nbr /= 10;
        i++;
    }
    return(i);
}

char *ft_itoa(int nbr)
{
    int n_lenght = 0;
    int sign = 0;
    if(nbr < 0)
    {
        n_lenght += 1;
        nbr *= -1;
        sign = 1;
    }
    n_lenght += nbr_lenght(nbr);
    char *str = (char *)malloc(sizeof(char) * n_lenght + 1);
    str[n_lenght] = '\0';
    n_lenght--;
    while(n_lenght >= 0)
    {
        str[n_lenght] = nbr % 10 + '0';
        nbr /= 10;
        n_lenght--;
    }
    if(sign)
        str[0] = '-';
    return(str);
}

int main(int argc, char *argv[])
{
    (void)(argc);
    printf("%s\n", ft_itoa(atoi(argv[1])));
    return(0);
}