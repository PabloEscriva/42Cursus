/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:54:53 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/12 15:11:13 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main(void)
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew("Node 1");
//     t_list *node2 = ft_lstnew("Node 2");
//     ft_lstadd_front(&head, node1);
//     ft_lstadd_front(&head, node2);
//     t_list *current = head;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     return 0;
// }