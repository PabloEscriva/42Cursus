/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:46:26 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/08 14:58:01 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *head[])
{
	t_stack	*tmp;

	if (!*head || (*head)->next == NULL)
		return ;
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;
}

void	swap_a(t_stack *head[])
{
	swap(head);
	ft_putstr("sa\n");
}

void	swap_b(t_stack *head[])
{
	swap(head);
	ft_putstr("sb\n");
}

void	swap_ab(t_stack *stack_a[], t_stack *stack_b[])
{
	swap(stack_a);
	swap(stack_b);
	ft_putstr("ss\n");
}
