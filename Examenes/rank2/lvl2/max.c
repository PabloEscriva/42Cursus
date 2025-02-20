int max(int *tab, unsigned int len)
{
    int i = 0;
    int max = 0;

    while(tab[i])
    {
        if(tab[i] > max)
            max = tab[i];
        i++;
    }
    return(max);
}

#include <stdio.h>

int main(void)
{
    int n[] = {1, 2, 8, 3, 5};
    printf("%i", max(n, 4));
}