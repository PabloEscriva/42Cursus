#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int aux;

    if(argc == 2)
    {
        while (argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                aux = argv[1][i] - 'a' + 1;
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                aux = argv[1][i] - 'A' + 1;
            while (aux > 0)
            {
                write(1, &argv[1][i], 1);
                aux--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}