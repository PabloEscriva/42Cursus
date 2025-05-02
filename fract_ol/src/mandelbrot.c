/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:51:16 by anzarago          #+#    #+#             */
/*   Updated: 2025/04/30 17:49:08 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	scroll_zoom_mandelbrot(double xdelta, double ydelta, void *param)
{
	t_data_fractol	*data;
	mlx_image_t		*img;

	data = (t_data_fractol *)param;
	img = (mlx_image_t *)data->img;
	(void)xdelta;
	if (ydelta > 0)
		data->zoom.factor *= 1.3;
	else if (ydelta < 0)
		data->zoom.factor /= 1.3;
	memset(img->pixels, 0, img->width * img->height * BPP);
	draw_mandelbrot(img, data);
}

void	key_move_mandelbrot(mlx_key_data_t keydata, void *param)
{
	t_data_fractol	*data;
	double			move_step;

	data = (t_data_fractol *)param;
	move_step = 0.05 / data->zoom.factor;
	if (keydata.action == MLX_PRESS || keydata.action == MLX_REPEAT)
	{
		if (keydata.key == MLX_KEY_ESCAPE)
		{
			mlx_terminate(data->mlx);
			exit(EXIT_SUCCESS);
		}
		if (keydata.key == MLX_KEY_LEFT)
			data->zoom.offset_x -= move_step;
		else if (keydata.key == MLX_KEY_RIGHT)
			data->zoom.offset_x += move_step;
		else if (keydata.key == MLX_KEY_UP)
			data->zoom.offset_y -= move_step;
		else if (keydata.key == MLX_KEY_DOWN)
			data->zoom.offset_y += move_step;
		memset(data->img->pixels, 0,
			data->img->width * data->img->height * BPP);
		draw_mandelbrot(data->img, data);
	}
}

int	print_mandelbrot(void)
{
	t_data_fractol	*data;

	data = malloc(sizeof(t_data_fractol));
	if (!data)
		return (0);
	data->zoom = (t_zoom){0.6, 0.5, 0.5};
	data->mlx = mlx_init(WIDTH, HEIGHT, "Fract-ol", true);
	if (!data->mlx)
		exit (EXIT_FAILURE);
	data->img = mlx_new_image(data->mlx, WIDTH, HEIGHT);
	if (!data->img)
	{
		mlx_terminate(data->mlx);
		return (EXIT_FAILURE);
	}
	mlx_image_to_window(data->mlx, data->img, 0, 0);
	draw_mandelbrot(data->img, data);
	mlx_scroll_hook(data->mlx, scroll_zoom_mandelbrot, data);
	mlx_key_hook(data->mlx, key_move_mandelbrot, data);
	mlx_loop(data->mlx);
	mlx_terminate(data->mlx);
	return (EXIT_SUCCESS);
}

void	draw_mandelbrot(mlx_image_t *img, t_data_fractol *data)
{
	int		x;
	int		y;
	int		iter;
	double	fx;
	double	fy;

	x = 0;
	while (x < WIDTH)
	{
		y = 0;
		while (y < HEIGHT)
		{
			fx = ((double)x / WIDTH - 0.75)
				/ data->zoom.factor + data->zoom.offset_x;
			fy = ((double)y / HEIGHT - 0.5)
				/ data->zoom.factor + data->zoom.offset_y;
			iter = 255 * ft_mandelbrot(fx * 2.5 * WIDTH, fy * 2.5 * HEIGHT)
				/ 127;
			mlx_put_pixel(img, x, y, get_rgba(colour_r(iter),
					colour_g(iter), colour_b(iter), 255));
			y++;
		}
		x++;
	}
}

int	ft_mandelbrot(double x, double y)
{
	int			i;
	t_complex	c;
	t_complex	z;

	c.re = x / 1500 - 0.75;
	c.im = y / 1500 - 1.25;
	z.re = 0;
	z.im = 0;
	i = -1;
	while (++i < 127)
	{
		z = ft_add_c(ft_prod_c(z, z), c);
		if (ft_arg(z) >= 4)
			return (i);
	}
	return (0);
}
