/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:47:34 by pescriva          #+#    #+#             */
/*   Updated: 2025/04/22 15:20:36 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_type(char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (type == '%')
		return (ft_putchar('%'));
	else if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (type == 'p')
		return (ft_putptr(va_arg(args, uintptr_t)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (type == 'u')
		return (ft_unsignbr(va_arg(args, unsigned int)));
	else if (type == 'x' || type == 'X')
		return (ft_puthex(va_arg(args, int), type));
	return (1);
}

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			len += ft_type(s[i], args);
		}
		else
		{
			ft_putchar(s[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}

// int main(void)
// {
// 	int a = ft_printf("hola mundo %c \n", 'p');
// 	int b = ft_printf("Hola %s \n", "mundo");
// 	int c = ft_printf("%d\n", 12345);
// 	int d = ft_printf("%x, %X\n", 123, 123);
// 	int e = ft_printf("%u", 1234);
// 	ft_printf("\n%d, %d, %d, %d, %d", a, b, c, d, e);
// 	return(0);
// }