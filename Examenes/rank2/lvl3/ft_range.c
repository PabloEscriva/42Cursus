#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int len = 0;
    if((end - start) < 0)
        len = ((end - start) * -1) + 1;
    else
        len = (end - start) + 1;

    int *range = (int *)malloc(len * sizeof(int));

    while(i < len)
    {
        if(start < end)
        {
            range[i] = start;
            start++;
        }
        else
        {
            range[i] = start;
            start--;
        }
        i++;
    }
    return(range);
}

#include <stdio.h>
int main()
{
    int start = -5;
    int end = 5;
    int *range = ft_range(start, end);
    
    if (!range)
    {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }
    
    int len = (end >= start) ? (end - start + 1) : (start - end + 1);
    
    printf("Rango generado: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");
    
    free(range);
    return 0;
}
