#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int m;
    while (s[i])
    {
        m = 0;
        while(reject[m])
        {
            if(s[i] == reject[m])
                return(i + 1);
            m++;
        }
        i++;
    }
    return(i);
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("%zu", ft_strcspn(argv[1], argv[2]));
}