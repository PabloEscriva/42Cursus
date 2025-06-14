/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:17:06 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/08 15:10:30 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_doubles(char *argv[])
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = count_args(argv);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_nbr(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[i] == '-')
	{
		i++;
		if (nbr[i] == '\0')
			error();
	}
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_input(int argc, char *argv[])
{
	int		i;
	long	tmp_argv;
	char	**tmp_array;

	i = 0;
	if (argc == 2)
		tmp_array = ft_split(argv[1], ' ');
	else
		tmp_array = argv + 1;
	if (check_doubles(tmp_array))
		error();
	while (tmp_array[i])
	{
		tmp_argv = ft_atoi(tmp_array[i]);
		if (!(tmp_argv >= INT_MIN && tmp_argv <= INT_MAX))
			error();
		if (!check_nbr(tmp_array[i]))
			error();
		i++;
	}
	if (argc == 2)
		free_arr(tmp_array);
}
