/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:25:05 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/10 14:51:44 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	num;

	len = ft_intlen(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	while (len > 0)
	{
		if (n < 0 && len == 1)
			break ;
		str[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (str);
}

// #include <stdio.h>
// #include <limits.h>
// int main() {

//     int test_cases[] = {0, 1, -1, 42, -42, INT_MAX, INT_MIN};
//     size_t num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
//     char *result;

//     for (size_t i = 0; i < num_cases; i++) {
//         result = ft_itoa(test_cases[i]);
//         if (result) {
//             printf("Entrada: %d -> Salida: %s\n", test_cases[i], result);
//             free(result);
//         } else {
//             printf("Error al convertir el número: %d\n", test_cases[i]);
//         }
//     }

//     return 0;
// }