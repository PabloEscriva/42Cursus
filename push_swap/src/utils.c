/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:28:39 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/08 14:59:49 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_stack *head[])
{
	t_stack	*tmp;

	tmp = *head;
	while (tmp && tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	count_args(char *argv[])
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

int	find_biggest(t_stack *head)
{
	int		big;
	t_stack	*tmp;

	big = INT_MIN;
	tmp = head;
	while (tmp)
	{
		if (tmp->index > big)
			big = tmp->index;
		tmp = tmp->next;
	}
	return (big);
}

int	find_bits(int biggest)
{
	int	max_bits;

	max_bits = 0;
	while (biggest > 0)
	{
		biggest >>= 1;
		max_bits++;
	}
	return (max_bits);
}
