/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:59:52 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/09 16:15:15 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != 0)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

// #include <fcntl.h>
// int main()
// {
//     char *s = "Hola Mundo";

//     int fd = open("prueba.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1)
//     {
//         return 1;
//     }
//     ft_putendl_fd(s, fd);
//     close(fd);
// }