/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:17:37 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/08 18:33:42 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *head[])
{
	t_stack	*tmp;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *head;
	*head = (*head)->next;
	tmp->next->next = NULL;
}

void	rotate_a(t_stack *head[])
{
	rotate(head);
	ft_putstr("ra\n");
}

void	rotate_b(t_stack *head[])
{
	rotate(head);
	ft_putstr("rb\n");
}

void	rotate_ab(t_stack *stack_a[], t_stack *stack_b[])
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr("rr\n");
}
