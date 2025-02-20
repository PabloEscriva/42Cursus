/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:03:34 by pescriva          #+#    #+#             */
/*   Updated: 2025/01/08 17:55:30 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char format)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_puthex(n / 16, format);
	}
	if ((n % 16) < 10)
		i += ft_putchar((n % 16) + '0');
	else
	{
		if (format == 'x')
			i += ft_putchar((n % 16) - 10 + 'a');
		else if (format == 'X')
			i += ft_putchar((n % 16) - 10 + 'A');
	}
	return (i);
}
