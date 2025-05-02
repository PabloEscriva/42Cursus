/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:50:50 by anzarago          #+#    #+#             */
/*   Updated: 2025/04/30 17:46:43 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <fcntl.h>
# include "../MLX42-master/include/MLX42/MLX42.h"
# include "../MLX42-master/include/MLX42/MLX42_Int.h"
# include "../libft/libft.h"

# define WIDTH 1920
# define HEIGHT 1080

typedef struct s_data
{
	void			*img;
	char			*addr;
	int				bits_per_pixel;
	int				line_length;
	int				endian;
}	t_data;

typedef struct s_complex
{
	double			re;
	double			im;
}	t_complex;

typedef struct s_mlx
{
	void			*window;
	void			*context;
	int32_t			width;
	int32_t			height;
	double			delta_time;
}	t_mlx;

typedef struct s_zoom
{
	double			factor;
	double			offset_x;
	double			offset_y;
}	t_zoom;

typedef struct s_data_fractol
{
	t_zoom			zoom;
	mlx_image_t		*img;
	mlx_t			*mlx;
	t_complex		c;
}	t_data_fractol;

t_complex	ft_add_c(t_complex x, t_complex y);
t_complex	ft_sub_c(t_complex x, t_complex y);
t_complex	ft_prod_c(t_complex x, t_complex y);
t_complex	ft_div_c(t_complex x, t_complex y);
t_complex	ft_retoc(double x);
double		ft_arg(t_complex z);

void		scroll_zoom_julia(double xdelta, double ydelta, void *param);
void		key_move_julia(mlx_key_data_t keydata, void *param);
void		draw_julia(mlx_image_t *img, t_complex c, t_data_fractol *data);
int			print_julia(char **argv);
int			ft_julia(double x, double y, t_complex c);

int			ft_mandelbrot(double x, double y);
void		draw_mandelbrot(mlx_image_t *img, t_data_fractol *data);
void		scroll_zoom_mandelbrot(double xdelta, double ydelta, void *param);
void		key_move_mandelbrot(mlx_key_data_t keydata, void *param);
int			print_mandelbrot(void);

int			get_rgba(int r, int g, int b, int a);
double		atoi_double(char *nptr);
int			ft_strcmp(char *s1, char *s2);
void		help_m(void);
int			colour_r(int iter);
int			colour_g(int iter);
int			colour_b(int iter);

#endif