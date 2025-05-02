/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:49:45 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/03 15:31:34 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	a;

	a = 0;
	while (*s != 0)
	{
		s++;
		a++;
	}
	return (a);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("La longitud de la cadena es %lu", strlen("Hola"));
// }