/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:18:55 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/04 17:46:31 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s)[i] == (unsigned char)c)
			return (((unsigned char *)s + i));
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char a[] = "Hola";
//     void *target = ft_memchr(a, 'H', 4);

//     printf("%ld", (char *)target - a);
// }