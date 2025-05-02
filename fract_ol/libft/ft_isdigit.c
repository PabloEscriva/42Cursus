/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:36:09 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/03 13:19:03 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int num)
{
	if ((num >= '0') && (num <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>
// int main(void) 
// {
//     printf("%d", ft_isdigit('A'));
// }