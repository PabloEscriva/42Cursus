/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:31:08 by pescriva          #+#    #+#             */
/*   Updated: 2024/12/10 19:10:11 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (0);
	str = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
//  char my_func(unsigned int i, char str)
//  {
//  	printf("My inner function: index = %d and %c\n", i, str);
//  	return str - 32;
//  }

//  int main()
//  {
//  	char str[10] = "hello.";
//  	printf("The result is %s\n", str);
//  	char *result = ft_strmapi(str, my_func);
//  	printf("The result is %s\n", result);
//  	return 0;
//  }
