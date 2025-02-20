/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:40:19 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/16 13:04:31 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}

// #include <stdio.h>

// void del(void *content)
// {
// 	free(content);
// }

// void print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("%s -> ", (char *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }

// int main()
// {
//     t_list *node1 = ft_lstnew(ft_strdup("Hello"));
//     t_list *node2 = ft_lstnew(ft_strdup("World"));
//     t_list *node3 = ft_lstnew(ft_strdup("42"));

//     node1->next = node2;
//     node2->next = node3;

//     printf("Lista antes de eliminar un nodo:\n");
//     print_list(node1);

//     ft_lstdelone(node2, del);

//     node1->next = node3;

//     printf("\nLista después de eliminar un nodo:\n");
//     print_list(node1);

//     ft_lstdelone(node1, del);
//     ft_lstdelone(node3, del);

//     return 0;
// }