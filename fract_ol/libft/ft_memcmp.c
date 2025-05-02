/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:50:26 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/10 19:48:39 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		if (((unsigned char *)ptr1)[i] < ((unsigned char *)ptr2)[i])
		{
			return (-1);
		}
		if (((unsigned char *)ptr1)[i] > ((unsigned char *)ptr2)[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "Hopaa mundo";
// 	char s2[] = "Hola mundo";
// 	int n;

// 	n = ft_memcmp(s1, s2, 2);

// 	printf("%d\n", n);
// }