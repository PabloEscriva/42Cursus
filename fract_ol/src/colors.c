/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:54:51 by anzarago          #+#    #+#             */
/*   Updated: 2025/04/30 18:43:53 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	get_rgba(int r, int g, int b, int a)
{
	return (r << 24 | g << 16 | b << 8 | a);
}

int	colour_r(int iter)

{
	iter = (int)(sin(0.1 * (255 - iter)) * 127 + 128);
	return (iter);
}

int	colour_g(int iter)

{
	iter = (int)(sin(0.1 * (255 - iter) + 2) * 127 + 128);
	return (iter);
}

int	colour_b(int iter)

{
	iter = (int)(sin(0.1 * (255 - iter) + 4) * 127 + 128);
	return (iter);
}
