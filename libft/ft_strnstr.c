/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:05:57 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/11 15:29:43 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		n = 0;
		while (little[n] && big[i + n] == little[n] && (i + n) < len)
			n++;
		if (little[n] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main() {
//     const char big[] = "Hola, mundo";
//     const char little[] = "mun";

//     char *result = ft_strnstr(big, little, 9);
//     printf("%s\n", result ? result : "No se encontró la subcadena");

//     return 0;
// }