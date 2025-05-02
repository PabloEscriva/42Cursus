/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:24:27 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/13 17:22:03 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//#include <stdio.h>
// int main()
// {
//     char *s = "Hello, world!";
//     char *substr;

//     substr = ft_substr(s, 7, 5);
//     if (substr)
//     {
//         printf("Subcadena: %s\n", substr);
//         free(substr);
//     }
//     else
//     {
//         printf("Error al crear la subcadena.\n");
//     }
//     return 0;
// }
