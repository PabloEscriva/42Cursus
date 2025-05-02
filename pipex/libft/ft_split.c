/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:55:42 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/16 12:42:45 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (s && *s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static void	*ft_free_all(char **dest, size_t i)
{
	while (i > 0)
		free(dest[--i]);
	free(dest);
	return (NULL);
}

static char	*ft_word_dup(const char *s, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	words;
	size_t	i;
	size_t	len;

	words = ft_countword(s, c);
	dest = malloc((words + 1) * sizeof(char *));
	if (!s || !dest)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		dest[i] = ft_word_dup(s, len);
		if (!dest[i++])
			return (ft_free_all(dest, i - 1));
		s += len;
	}
	dest[i] = NULL;
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "Hola,esto,es,un,ejemplo";
// 	char delimiter = ',';
// 	char **result = ft_split(str, delimiter);
// 	int i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("Parte %d: %s\n", i + 1, result[i]);
// 		i++;
// 	}
// 	ft_free_split(result);
// 	return (0);
// }