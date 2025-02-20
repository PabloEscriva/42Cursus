/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:08:42 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/13 16:21:41 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}

// #include <stdio.h>

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// void	to_uppercase(void *content)
// {
// 	char	*str = (char *)content;
// 	for (int i = 0; str[i]; i++)
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 			str[i] -= 32;
// }

// int	main(void)
// {
// 	t_list	*list = ft_lstnew(ft_strdup("hello"));
// 	list->next = ft_lstnew(ft_strdup("world"));
// 	list->next->next = ft_lstnew(ft_strdup("linked list"));

// 	printf("Contenido original:\n");
// 	ft_lstiter(list, print_content);

// 	ft_lstiter(list, to_uppercase);

// 	printf("\nContenido después de aplicar to_uppercase:\n");
// 	ft_lstiter(list, print_content);

// 	t_list *temp;
// 	while (list)
// 	{
// 		temp = list->next;
// 		free(list->content);
// 		free(list);
// 		list = temp;
// 	}

// 	return (0);
// }