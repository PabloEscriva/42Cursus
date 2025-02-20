#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

int main(void)
{
    int a = 1;
    int b = 2;
    ft_swap(&a, &b);
    printf("%d, %d", a, b);
    return(0);
}