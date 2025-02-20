/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:35:45 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/10 19:36:41 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	int	i;

	i = 0;
	while (i < (int)num)
	{
		((char *)ptr)[i] = value;
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// int main() {
//     char buffer[] = "Hola Mundo";
//     ft_memset(buffer, 'X', 4);
// 	printf("%s", buffer);

//     return 0;
// }