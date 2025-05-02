/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:49:03 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/02 12:53:12 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child(char **argv, char **envp, int *fd)
{
	int	filein;

	filein = open(argv[1], O_RDONLY, 0777);
	if (filein == -1)
		error();
	dup2(filein, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[0]);
	ft_execute(argv[2], envp);
}

void	parent(char **argv, char **envp, int *fd)
{
	int	fileout;

	if (access(argv[1], F_OK) == -1)
		exit(EXIT_FAILURE);
	fileout = open(argv[4], O_RDONLY | O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (fileout == -1)
		error();
	dup2 (fd[0], STDIN_FILENO);
	dup2 (fileout, STDOUT_FILENO);
	close(fd[1]);
	ft_execute(argv[3], envp);
}

int	main(int argc, char **argv, char **envp)
{
	int		fd[2];
	pid_t	pid1;
	int		status;

	if (!envp[0])
		return (ft_enverror());
	if (argc == 5)
	{
		if (pipe (fd) == -1)
			error();
		pid1 = fork();
		if (pid1 == -1)
			error();
		if (pid1 == 0)
			child(argv, envp, fd);
		waitpid(pid1, &status, 0);
		if (WIFEXITED(status) && WEXITSTATUS(status) != 0)
			exit(WEXITSTATUS(status));
		parent(argv, envp, fd);
	}
	else
		ft_argverror();
	return (0);
}
