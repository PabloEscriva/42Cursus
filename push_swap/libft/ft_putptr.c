/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:35:37 by pescriva          #+#    #+#             */
/*   Updated: 2025/04/22 15:21:24 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenptr(uintptr_t ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
		return (1);
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}

static void	ptrtohex(uintptr_t ptr)
{
	if (ptr >= 16)
	{
		ptrtohex(ptr / 16);
		ptrtohex(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_putchar(ptr + '0');
		else
			ft_putchar((ptr - 10) + 'a');
	}
}

int	ft_putptr(uintptr_t ptr)
{
	int	len;

	if (ptr == 0)
		return ((write (1, "(nil)", 5)));
	else
	{
		len = 2;
		write(1, "0x", 2);
		ptrtohex(ptr);
		len += lenptr(ptr);
	}
	return (len);
}
