#include <stdarg.h>
#include <unistd.h>

int putchar(int c)
{
    write(1, &c, 1);
    return(1);
}

int putstr(char *str)
{
    int lenght = 0;
    if(!str)
        str = "(null)";
    while(*str)
        lenght += write(1, str++, 1);
    return(lenght);
}

int putnbr(long int number)
{
    int lenght = 0;
    if(number < 0)
    {
        lenght += write(1, "-", 1);
        number *= -1;
    }
    if(number >= 10)
        lenght += putnbr(number / 10);
    char c = number % 10 + '0';
    lenght += putchar(c);
    return(lenght);
}

int put_hex(long int nbr)
{
    char *digits = "0123456789abcdef";
    int lenght = 0;

    if (nbr >= 16)
        lenght += put_hex(nbr / 16);
    nbr = digits[nbr % 16];
    lenght += putchar(nbr);
    return(lenght);
}

int ft_printf(const char *format, ...)
{
    int i = 0;
    int lenght = 0;
    va_list argument;

    va_start(argument, format);
    while(format[i])
    {
        if(format[i] != '%')
            lenght += write(1, &format[i], 1);
        else if(format[i] == '%' && format[i + 1])
        {
            i++;
            if(format[i] == 's')
                lenght += putstr(va_arg(argument, char *));
            else if(format[i] == 'x')
                lenght += put_hex(va_arg(argument, unsigned int));
            else if(format[i] == 'd')
                lenght += putnbr(va_arg(argument, int));
        }
        i++;
    }
    va_end(argument);
    return(lenght);
}


#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	size;

	size = 0;
	size = ft_printf("%%\n");
	printf("%d\n", size);
	size = printf("%%\n");
	printf("%d\n", size);
	size = ft_printf("%s\n", "toto");
	printf("%d\n", size);
	size = printf("%s\n", "toto");
	printf("%d\n", size);
	size = ft_printf("Magic %s is %d\n", "number", 42);
	printf("%d\n", size);
	size = printf("Magic %s is %d\n", "number", 42);
	printf("%d\n", size);
	size = ft_printf("Hexadecimal for %d is %x\n", 42, 42);
	printf("%d\n", size);
	size = printf("Hexadecimal for %d is %x\n", 42, 42);
	printf("%d\n", size);
	size = ft_printf("%d %d %x\n", INT_MAX, INT_MIN, UINT_MAX);
	printf("%d\n", size);
	size = ft_printf("%d %d %x\n", INT_MAX, INT_MIN, UINT_MAX);
	printf("%d\n", size);
	size = ft_printf("%d, %d\n", 0, -24);
	printf("%d\n", size);
	size = ft_printf("%d, %d\n", 0, -24);
	printf("%d\n", size);
	printf("%d\n", size);
	ft_printf("Hello world %\n");
	return (0);
}