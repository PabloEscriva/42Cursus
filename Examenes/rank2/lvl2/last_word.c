#include <unistd.h>

int main(int argc, char *argv[]) {
    int i = 0;
    int start = 0;

    if (argc == 2) {
        while (argv[1][i] != '\0')
            i++;
        while (i > 0 && argv[1][i - 1] == ' ') 
            i--;
        start = i - 1;
        while (start >= 0 && argv[1][start] != ' ')
            start--;
        start++;
        while (argv[1][start] != '\0' && argv[1][start] != ' ') 
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }

    return 0;
}