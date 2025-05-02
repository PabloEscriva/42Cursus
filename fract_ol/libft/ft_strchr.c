/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:48:48 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/11 15:48:35 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			i;

	ch = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i++;
	}
	if (ch == '\0')
		return ((char *)(s + i));
	return (NULL);
}

// #include <stdio.h>
// int main() {
//     const char str[] = "Hola, mundo";
//     char *result = ft_strchr(str, 'o');
//     if (result != NULL)
//         printf("Se encontró 'm' en: %ld\n", result - str);
//     else
//         printf("No se encontró 'm'.\n");
//     return 0;
// }
