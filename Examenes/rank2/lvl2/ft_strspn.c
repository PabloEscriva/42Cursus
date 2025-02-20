#include <stdlib.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int count = 0;

    while(s[i] == accept[i] && s[i] != '\0')
    {
        count++;
        i++;
    }
    if(count == 0)
        return(0);
    return(count);
}

#include<stdio.h>
int main(int argc, char *argv[])
{
    printf("%zu", ft_strspn(argv[1], argv[2]));
}