/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:12:02 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/06 14:11:47 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *head[])
{
	int	biggest;

	biggest = find_biggest(*head);
	if ((*head)->index == biggest)
		rotate_a(head);
	else if ((*head)->next->index == biggest)
		r_rotate_a(head);
	if ((*head)->index > (*head)->next->index)
		swap_a(head);
}

void	sort_five(t_stack *stack_a[], t_stack *stack_b[])
{
	int	size;

	size = count_nodes(*stack_a);
	while (size--)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			push_b(stack_a, stack_b);
		else
			rotate_a(stack_a);
	}
	sort_three(stack_a);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
	if ((*stack_a)->index > (*stack_a)->next->index)
		swap_a(stack_a);
}

void	radix(t_stack *stack_a[], t_stack *stack_b[])
{
	int	biggest;
	int	bits;
	int	i;
	int	j;

	biggest = find_biggest(*stack_a);
	bits = find_bits(biggest);
	i = 0;
	while (i < bits)
	{
		j = 0;
		while (j <= biggest)
		{
			if (((*stack_a)->index >> i) & 1)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
		i++;
	}
}

void	sort_stack(t_stack *stack_a[], t_stack *stack_b[])
{
	int	size;

	size = count_nodes(*stack_a);
	if (!sorted(stack_a) && size <= 3)
		sort_three(stack_a);
	else if (!sorted(stack_a) && size <= 5)
		sort_five(stack_a, stack_b);
	else if (!sorted(stack_a))
		radix(stack_a, stack_b);
	else
	{
		free_stack(stack_a);
		free_stack(stack_b);
	}
}
