/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:51:08 by anzarago          #+#    #+#             */
/*   Updated: 2025/04/30 20:19:26 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	help_m(void)
{
	ft_putstr_fd("*****************************************************\n", 1);
	ft_putstr_fd("*                                                   *\n", 1);
	ft_putstr_fd("*User Help:                                         *\n", 1);
	ft_putstr_fd("*./fract_ol mandelbrot       → Launch Mandelbrot set*\n", 1);
	ft_putstr_fd("*./fract_ol julia <arg 1> <arg 2> → Launch Julia set*\n", 1);
	ft_putstr_fd("*                                                   *\n", 1);
	ft_putstr_fd("*****************************************************\n", 1);
}

int32_t	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argv[1] && ft_strcmp(argv[1], "julia") == 0 && argc == 4)
	{
		if (ft_str_digit (argv[2]) && ft_str_digit (argv[3])
			&& ft_strlen(argv[2]) > 0 && ft_strlen(argv[3]) > 0)
			print_julia(argv);
		else
			help_m();
	}
	else if (argv[1] && ft_strcmp (argv[1], "mandelbrot") == 0
		&& argc == 2)
		print_mandelbrot();
	else
		help_m ();
	return (0);
}
