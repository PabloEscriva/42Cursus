/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:33:04 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/10 19:10:39 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// #include <ctype.h>

// void to_uppercase(unsigned int i, char *c) {
//     if (c && islower(*c)) {
//         *c = toupper(*c);
//     }
// }

// int main() {
//     char str[] = "hola mundo";

//     printf("Cadena original: %s\n", str);

//     ft_striteri(str, to_uppercase);

//     printf("Cadena modificada: %s\n", str);

//     return 0;
// }