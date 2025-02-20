/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:35:20 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/13 15:34:52 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
}

// #include <stdio.h>
// void print_list(t_list *lst)
// {
//     while (lst != NULL)
//     {
//         printf("%s -> ", (char *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }

// int main()
// {
//     t_list *head = ft_lstnew("Hello");
//     t_list *node2 = ft_lstnew("World");
//     t_list *node3 = ft_lstnew("42");

//     ft_lstadd_front(&head, node2);
//     ft_lstadd_back(&head, node3);

//     print_list(head);

//     t_list *temp;
//     while (head != NULL)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
//     return 0;
// }