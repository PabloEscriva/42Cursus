/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:49:13 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/02 12:50:19 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <fcntl.h>

void	error(void);
int		ft_enverror(void);
void	ft_argverror(void);
int		ft_patherror(void);
char	*ft_find_path(char *commands, char **envp);
void	ft_execute(char *argv, char **envp);
void	child(char **argv, char **envp, int *fd);
void	parent(char **argv, char **envp, int *fd);
int		main(int argc, char **argv, char **envp);
int		ft_path_position(char **envp);
void	ft_free(char **p_commands);

#endif