#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int m;

    while(s1[i])
    {
        m = 0;
        while(s2[m])
        {
            if(s1[i] == s2[m])
                return((char *)&s1[i]);
            m++;
        }
        i++;
    }
    return(NULL);
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("%s", ft_strpbrk(argv[1], argv[2]));
}