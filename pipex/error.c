/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:48:46 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/02 12:48:48 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error(void)
{
	perror ("ERROR");
	exit (EXIT_FAILURE);
}

int	ft_enverror(void)
{
	ft_putstr_fd ("Error: Environment variables not found\n", 2);
	return (0);
}

void	ft_argverror(void)
{
	ft_putstr_fd ("Error: Incorrect number of arguments\n", 2);
	error ();
}

int	ft_patherror(void)
{
	ft_putstr_fd ("Error: Path missing\n", 2);
	exit(EXIT_FAILURE);
	return (0);
}
