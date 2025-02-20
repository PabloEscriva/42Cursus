/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:26:02 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/16 13:04:39 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}

// #include <stdio.h>
// int main()
// {
//     t_list *head = ft_lstnew("Hello");
//     t_list *node2 = ft_lstnew("World");
//     t_list *node3 = ft_lstnew("42");

//     ft_lstadd_front(&head, node2);
//     ft_lstadd_front(&head, node3);

//     t_list *last = ft_lstlast(head);
//     if (last)
//     {
//         printf("Último nodo: %s\n", (char *)last->content);
//     }

//     t_list *temp;
//     while (head != NULL)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }

//     return 0;
// }