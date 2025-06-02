#include <unistd.h>

void rostring(char *str)
{
    int i = 0;
    int first_word_length = 0;

    while(str[i] <= 32)
        i++;
    while(str[i])
    {
        if(first_word_length == 0)
        {
            while(str[i] && !(str[i] <= 32))
            {
                i++;
                first_word_length++;
            }
        }
        else
        {
            while(str[i])
            {
                write(1, &str[i], 1);
                i++;
            }
            write(1, " ", 1);
        }
    }
    i = 0;
    while(str[i] <= 32)
        i++;
    while(first_word_length > 0)
    {
        write(1, &str[i], 1);
        i++;
        first_word_length--;
    }
}

int main(int argc, char *argv[])
{
    if(argc == 2)
        rostring(argv[1]);
    write(1, "\n", 1);
    return(0);
}