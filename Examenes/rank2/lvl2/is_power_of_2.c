int	    is_power_of_2(unsigned int n)
{
    if(n == 0)
        return (0);
    while((n % 2) == 0)
        n /= 2;
    return(n == 1);
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf("%d", is_power_of_2(atoi(argv[1])));
}