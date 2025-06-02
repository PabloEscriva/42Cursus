/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:35:50 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/08 14:56:28 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack_from[], t_stack *stack_to[])
{
	t_stack	*tmp;

	if (stack_from == NULL || *stack_from == NULL)
		return ;
	tmp = *stack_from;
	*stack_from = (*stack_from)->next;
	if (stack_to == NULL)
		*stack_to = tmp;
	else
	{
		tmp->next = *stack_to;
		*stack_to = tmp;
	}
}

void	push_a(t_stack *stack_a[], t_stack *stack_b[])
{
	push(stack_b, stack_a);
	ft_putstr("pa\n");
}

void	push_b(t_stack *stack_a[], t_stack *stack_b[])
{
	push(stack_a, stack_b);
	ft_putstr("pb\n");
}
