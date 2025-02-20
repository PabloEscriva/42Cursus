/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:16:33 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/03 15:23:58 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size == 0)
	{
		return (count);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

// #include <stdio.h>
// int main(void) {
//     char src[100] = "42 Málaga";
//     char dest[100];
//     unsigned int n = ft_strlcpy(dest, src, 5);
//     printf("\nString src: %s", src);
//     printf("\nString dest: %s", dest);
//     printf("\nLength of src: %u", n);
//     return 0;
// }