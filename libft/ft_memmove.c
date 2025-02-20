/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:28:44 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/11 15:47:53 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *) dest)[i - 1] = ((unsigned char *) src)[i - 1];
			i--;
		}
	}
	return (dest);
}

// #include <stdio.h>
// int main() {
//     char a[] = "Hola Mundo";
// 	char b[4];
//     ft_memmove(b, a, 3);
// 	printf("%s", b);

//     return 0;
// }