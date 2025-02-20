/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:26:29 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/03 15:33:43 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	x;
	unsigned int	dlen;
	unsigned int	slen;

	a = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	dlen = x;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[a] != '\0' && a < size - dlen - 1)
	{
		dest[x] = src[a];
		a++;
		x++;
	}
	dest[x] = '\0';
	return (dlen + slen);
}

// #include <stdio.h>
// int main() {
//     char dest1[20] = "Hello";
//     char src1[] = " World!";
//     unsigned int size1 = 15;

//     char dest2[20] = "Hello";
//     char src2[] = " World!";
//     unsigned int size2 = 3;

//     unsigned int result1 = ft_strlcat(dest1, src1, size1);
//     printf("Resultado 1: '%s', Longitud retornada: %u\n", dest1, result1);

//     unsigned int result2 = ft_strlcat(dest2, src2, size2);
//     printf("Resultado 2: '%s', Longitud retornada: %u\n", dest2, result2);

//     return 0;
// }