/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:51:01 by anzarago          #+#    #+#             */
/*   Updated: 2025/05/02 15:23:22 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_julia(double x, double y, t_complex c)
{
	int			i;
	t_complex	z;

	z.re = x / 1500 - 0.75;
	z.im = y / 1500 - 0.75;
	i = 0;
	while (++i < 255)
	{
		z = ft_add_c(ft_prod_c(z, z), c);
		if (ft_arg(z) >= 4)
			return (i);
	}
	return (0);
}

void	scroll_zoom_julia(double xdelta, double ydelta, void *param)
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
	draw_julia(img, data->c, data);
}

void	key_move_julia(mlx_key_data_t keydata, void *param)
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
		draw_julia(data->img, data->c, data);
	}
}

void	draw_julia(mlx_image_t *img, t_complex c, t_data_fractol *data)
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
			fy = ((double)y / HEIGHT - 0.75)
				/ data->zoom.factor + data->zoom.offset_y;
			iter = ft_julia(fx * 2.5 * WIDTH, fy * 2.5 * HEIGHT, c);
			mlx_put_pixel(img, x, y, get_rgba(colour_r(iter),
					colour_g(iter), colour_b(iter), 255));
			y++;
		}
		x++;
	}
}

int	print_julia(char **argv)
{
	t_data_fractol	*data;

	data = malloc(sizeof(t_data_fractol));
	if(!data)
		return (0);
	data->zoom = (t_zoom){0.6, 0.5, 0.5};
	data->c = (t_complex){ft_atof(argv[2]), ft_atof(argv[3])};
	data->mlx = mlx_init(WIDTH, HEIGHT, "Fract-ol", true);
	if (!data->mlx)
		exit(EXIT_FAILURE);
	data->img = mlx_new_image(data->mlx, WIDTH, HEIGHT);
	if (!data->img)
	{
		mlx_terminate(data->mlx);
		return (EXIT_FAILURE);
	}
	mlx_image_to_window(data->mlx, data->img, 0, 0);
	draw_julia(data->img, data->c, data);
	mlx_scroll_hook(data->mlx, scroll_zoom_julia, data);
	mlx_key_hook(data->mlx, key_move_julia, data);
	mlx_loop(data->mlx);
	mlx_terminate(data->mlx);
	return (EXIT_SUCCESS);
}
