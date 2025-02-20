/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:25:39 by pescriva          #+#    #+#             */
/*   Updated: 2025/01/08 17:50:01 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_unsignbr(n / 10);
	i += ft_putchar((n % 10) + '0');
	return (i);
}
