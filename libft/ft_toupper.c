/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:07:17 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/03 13:19:06 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int num)
{
	if (num >= 'a' && num <= 'z')
	{
		num -= 32;
	}
	return (num);
}

// #include <stdio.h>
// int main(void) 
// {
//     printf("%c", ft_toupper('a'));
// }