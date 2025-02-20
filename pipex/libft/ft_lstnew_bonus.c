/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:37:30 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/16 13:05:03 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}

// #include <stdio.h>

// int main(void)
// {
//     int value = 42;
//     t_list *node;
//     node = ft_lstnew(&value);
//     if (!node)
//     {
//         printf("Error: No se pudo asignar memoria para el nodo.\n");
//         return (1);
//     }
//     printf("Contenido del nodo: %d\n", *(int *)node->content);
//     free(node);

//     return (0);
// }