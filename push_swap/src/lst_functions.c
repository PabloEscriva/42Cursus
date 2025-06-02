/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:28:13 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/05 17:09:00 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_nodes(t_stack *head)
{
	int	i;

	i = 0;
	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}

t_stack	*make_new_node(int new_value)
{
	t_stack	*new_node;

	new_node = ft_calloc(1, sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = new_value;
	new_node->index = 0;
	new_node->next = NULL;
	return (new_node);
}

void	insert_tail(t_stack *head[], int new_value)
{
	t_stack	*current;

	if (*head == NULL)
	{
		*head = make_new_node(new_value);
		return ;
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = make_new_node(new_value);
}
