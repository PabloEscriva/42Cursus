#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int n = 0;
    char *aux;

    while (src[n])
        n++;
    aux = (char *)malloc(i * sizeof(char) + 1);
    while (src[i])
    {
        aux[i] = src[i];
        i++;
    }
    aux[i] = '\0';
    return(aux);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("%s", ft_strdup(argv[1]));
}