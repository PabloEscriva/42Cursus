/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:33:06 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/04 12:47:41 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int num)
{
	if (num >= 'A' && num <= 'Z')
	{
		num += 32;
	}
	return (num);
}

// #include <stdio.h>
// int main(void) 
// {
//     printf("%c", ft_toupper('A'));
// }