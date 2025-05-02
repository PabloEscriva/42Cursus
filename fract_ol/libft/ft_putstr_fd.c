/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:47:13 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/09 15:58:04 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != 0)
	{
		write(fd, s, 1);
		s++;
	}
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
//     ft_putstr_fd(s, fd);
//     close(fd);
// }