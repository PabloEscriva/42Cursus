/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:53:13 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/13 16:07:04 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = node;
	}
	*lst = NULL;
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

// int	main(void)
// {
// 	t_list	*list = ft_lstnew(ft_strdup("First"));
// 	list->next = ft_lstnew(ft_strdup("Second"));
// 	list->next->next = ft_lstnew(ft_strdup("Third"));

// 	printf("Lista antes de limpiar:\n");
// 	print_list(list);

// 	ft_lstclear(&list, del);

// 	printf("\nLista después de limpiar:\n");
// 	print_list(list);

// 	return (0);
// }