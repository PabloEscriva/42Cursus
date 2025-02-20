int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while((s1[i] || s2[i]) && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("%d", ft_strcmp(argv[1], argv[2]));
}