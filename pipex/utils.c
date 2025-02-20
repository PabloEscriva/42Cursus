/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:52:57 by pescriva          #+#    #+#             */
/*   Updated: 2025/02/12 16:08:39 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*find_path(char *command, char *envp[])
{
	char	**paths;
	char	*path;
	char	*aux;
	int		i;

	i = 0;
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (paths[i])
	{
		aux = ft_strjoin(paths[i], "/");
		path = ft_strjoin(aux, command);
		free (aux);
		if (access(path, F_OK) == 0)
			return (path);
		free (path);
		i++;
	}
	i = -1;
	while (paths[++i])
		free (paths[i]);
	free (paths);
	return (0);
}

void	error(void)
{
	perror("Error");
	exit(EXIT_FAILURE);
}

void	execute(char *argv, char *envp[])
{
	char	**command;
	char	*path;
	int		i;

	i = 0;
	command = ft_split(argv, ' ');
	path = find_path(command[0], envp);
	if (!path)
	{
		while (command[i])
		{
			free (command[i]);
			i++;
		}
		free (command);
		error();
	}
	if (execve(path, command, envp) == -1)
		error();
}
