# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1337
#endif

// Cogemos un string y lo copiamos en otro haciendo un malloc. Devolviendo el nuevo string
char *ft_strdup(char *str) 
{
    int i;
    char *new;

    i = 0;

    while (str[i])
        i++;
    new = (char *)malloc(i + 1);
    if (!new) {
        return NULL;
    }
    i = 0;
    while (str[i]) {
        new[i] = str[i];
        i++;
    }
    new[i] = '\0';
    return new;
}


char *get_next_line(int fd) {
    int i;
    static char buff[BUFFER_SIZE];
    static int buff_read = 0;
    static int buff_position = 0;
    char line[42000];

    //comprobaciones
    i = 0;
    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;
    //bucle infinito que se rompe al entrar en las dif condiciones
    while (1) 
    {
        if (buff_position >= buff_read) 
        {
            buff_read = read(fd, buff, BUFFER_SIZE);
            //la funcion read devuelve cuantos bytes ha leido
            buff_position = 0;
            if (buff_read <= 0)
                break;
            //si no lo lee bien lo que hara es que devuelve -1 si no lee devuelve 0
            //se rompe el bucle y devuelve NULL
        }
        //lo leido se encuentra en buff
        line[i] = buff[buff_position];
        i++;
        buff_position++;
        //si es un salto de linea que salga del bucle
        if (line[i - 1] == '\n')
            break;
    }
    line[i] = '\0';
    if (i == 0)
        return NULL;
    //devolvemos la linea alojada con el strdup
    return (ft_strdup(line));
}

#include <stdio.h>

int main(int argc, char **argv)
{
    int     fd;
    char    *line;

    if(argc == 2)
    {
        fd = open(argv[1], O_RDONLY);
        if( fd == -1)
            return(1);
        line = get_next_line(fd);
        while(line)
        {
            printf("%s\n", line);
            free(line);
            line = get_next_line(fd);
        }
        free(line);
        close(fd);
    }
    return(0);
}