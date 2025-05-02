/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:09:10 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/09 12:37:48 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// #include <stdio.h>
// int main() {
//     size_t num_elements = 5;
//     size_t size_of_element = sizeof(int);

//     int *arr = ft_calloc(num_elements, size_of_element);
//     if (arr) {
//         for (size_t i = 0; i < num_elements; i++) {
//             printf("arr[%zu] = %d\n", i, arr[i]);
//         }
//         free(arr);
//     } else {
//         printf("Error al asignar memoria\n");
//     }

//     return 0;
// }