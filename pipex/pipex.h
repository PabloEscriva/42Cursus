/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:21:26 by pescriva          #+#    #+#             */
/*   Updated: 2025/02/19 15:36:52 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft/libft.h"
# include <sys/wait.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

char	*find_path(char *command, char *envp[]);
void	error(void);
void	execute(char *argv, char *envp[]);

#endif