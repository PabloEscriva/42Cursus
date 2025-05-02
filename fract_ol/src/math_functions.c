/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzarago <anzarago@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:08:16 by rojimene          #+#    #+#             */
/*   Updated: 2025/04/28 10:24:16 by anzarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_complex	ft_add_c(t_complex x, t_complex y)
{
	t_complex	z;

	z.re = x.re + y.re;
	z.im = x.im + y.im;
	return (z);
}

t_complex	ft_sub_c(t_complex x, t_complex y)
{
	t_complex	z;

	z.re = x.re - y.re;
	z.im = x.im - y.im;
	return (z);
}

t_complex	ft_prod_c(t_complex x, t_complex y)
{
	t_complex	z;

	z.re = (x.re * y.re) - (x.im * y.im);
	z.im = (x.re * y.im) + (x.im * y.re);
	return (z);
}

t_complex	ft_div_c(t_complex x, t_complex y)
{
	t_complex	z;

	z.re = ((x.re * y.re) + (x.im * y.im)) / ((y.re * y.re) + (y.im * y.im));
	z.im = ((x.im * y.re) - (x.re * y.im)) / ((y.re * y.re) + (y.im * y.im));
	return (z);
}

t_complex	ft_retoc(double x)
{
	t_complex	z;

	z.re = x;
	z.im = 0;
	return (z);
}
