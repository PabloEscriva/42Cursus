/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:03:26 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/11 15:49:57 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				n;
	unsigned char	ch;

	ch = (unsigned char)c;
	n = ft_strlen(s);
	while (n >= 0)
	{
		if (s[n] == ch)
			return ((char *)(s + n));
		n--;
	}
	return (0);
}

// #include <stdio.h>
// int main() {
//     const char str[] = "Hola, mundo";
//     char *result = ft_strrchr(str, 'o');
//     if (result != NULL)
//         printf("Se encontró 'm' en: %ld\n", result - str);
//     else
//         printf("No se encontró 'm'.\n");
//     return 0;
// }