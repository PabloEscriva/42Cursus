/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:35:45 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/08 14:53:53 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate(t_stack *head[])
{
	t_stack	*prev_tail;
	t_stack	*new_tail;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	prev_tail = *head;
	while (prev_tail->next != NULL)
	{
		new_tail = prev_tail;
		prev_tail = prev_tail->next;
	}
	prev_tail->next = *head;
	new_tail->next = NULL;
	*head = prev_tail;
}

void	r_rotate_a(t_stack *head[])
{
	r_rotate(head);
	ft_putstr("rra\n");
}

void	r_rotate_b(t_stack *head[])
{
	r_rotate(head);
	ft_putstr("rrb\n");
}

void	r_rotate_ab(t_stack *stack_a[], t_stack *stack_b[])
{
	r_rotate(stack_a);
	r_rotate(stack_b);
	ft_putstr("rrr\n");
}
