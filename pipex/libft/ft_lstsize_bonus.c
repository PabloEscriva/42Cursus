/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:12:31 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/12 15:24:35 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
//     t_list *head = ft_lstnew("Hello");
//     t_list *node2 = ft_lstnew("World");
//     t_list *node3 = ft_lstnew("42");
//     ft_lstadd_front(&head, node2);
//     ft_lstadd_front(&head, node3);
//     printf("Tamaño de la lista: %d\n", ft_lstsize(head));
//     t_list *temp;
//     while (head != NULL)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
//     return 0;
// }