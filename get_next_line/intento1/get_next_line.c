/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:40:51 by pescriva          #+#    #+#             */
/*   Updated: 2025/01/28 13:30:54 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		i ++;
	}
	return (i);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
	{
		free (str);
		str = NULL;
		return (NULL);
	}
	str = ft_alloc(str, fd);
	if (!str)
		return (NULL);
	line = ft_new_line(str);
	str = ft_remove_line(str);
	return (line);
}

// #include <stdio.h>

// int main(int ac, char **av)
// {
// 	int		fd;
// 	char	*line;

// 	if (ac == 2)
// 	{
// 		fd = open(av[1], O_RDONLY);
// 		if (fd == -1)
// 			return (1);
// 		line = get_next_line(fd);
// 		while (line)
// 		{
// 			printf("%s", line);
// 			free(line);
// 			line = get_next_line(fd);
// 		}
// 		free(line);
// 		close(fd);
// 	}
// 	return (0);
// }
