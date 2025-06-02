/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:23:41 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/09 16:50:39 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (0);
	while (i < ft_strlen(s1))
	{
		result[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}

// #include <stdio.h>
// int main()
// {
//     // Definimos dos cadenas para probar la función
//     const char *str1 = "Hola, ";
//     const char *str2 = "Mundo!";
//     char *result = ft_strjoin(str1, str2);
//     if (result)
//     {
//         printf("Resultado de la concatenación: %s\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Error al concatenar las cadenas.\n");
//     }
//     return 0;
// }