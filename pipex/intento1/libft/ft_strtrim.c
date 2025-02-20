/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:24:14 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/10 12:42:58 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*dest;

	i = 0;
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	dest = (char *)malloc(end - start + 2);
	if (!dest)
		return (0);
	while (start <= end)
	{
		dest[i] = s1[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main() {
//     char str[] = "mundo mund hola mundo";
//     char set[] = "mundo ";

//     char *trimmed = ft_strtrim(str, set);

//     if (trimmed) {
//         printf("Cadena original: \"%s\"\n", str);
//         printf("Cadena recortada: \"%s\"\n", trimmed);
//         free(trimmed);
//     } else {
//         printf("Error al reservar memoria.\n");
//     }

//     return 0;
// }