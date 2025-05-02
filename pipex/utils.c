/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:49:24 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/02 12:52:37 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_free(char **p_commands)
{
	int	i;

	i = 0;
	while (p_commands[i])
		free(p_commands[i++]);
	free (p_commands);
}

int	ft_path_position(char **envp)
{
	int	i;

	i = 0;
	while (ft_strnstr (envp[i], "PATH=", 5) == 0)
	{
		i++;
		if (envp[i] == NULL)
			exit(ft_patherror());
	}
	return (i);
}

char	*ft_find_path(char *commands, char **envp)
{
	char	**paths;
	char	*path;
	char	*command_path;
	int		i;

	i = ft_path_position(envp);
	paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (paths[i])
	{
		path = ft_strjoin(paths[i], "/");
		command_path = ft_strjoin(path, commands);
		free(path);
		if (access(command_path, F_OK) == 0)
			return (command_path);
		free (command_path);
		i++;
	}
	ft_free(paths);
	return (0);
}

void	ft_execute(char *argv, char **envp)
{
	char	**commands;
	char	*path;

	if (!argv || *argv == '\0')
	{
		ft_putstr_fd ("Error: Empty command\n", 2);
		exit(EXIT_FAILURE);
	}
	commands = ft_split(argv, ' ');
	if (!commands || !commands[0])
	{
		ft_putstr_fd ("Error: Invalid command\n", 2);
		if (commands)
			ft_free(commands);
		exit(EXIT_FAILURE);
	}
	path = ft_find_path(commands[0], envp);
	if (!path)
		ft_free(commands);
	if (execve(path, commands, envp) == -1)
		error();
}
