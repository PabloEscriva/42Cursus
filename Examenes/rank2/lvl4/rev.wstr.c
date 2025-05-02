#include <unistd.h>
#include <stdlib.h>

int is_space(char c)
{
    if(c == 32)
        return(1);
    return(0);
}

int strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

int main(int argc, char *argv[])
{
    int i = 0;
    if(argc == 2)
    {
        int len = strlen(argv[1]);
        char *rev = (char *)malloc(sizeof(char) * len + 1);
        while(argv[1][i])
        {

        }
    }
    write(1, "\n", 1);
    return(0);
}