/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libdraw.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 14:57:31 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/14 18:12:18 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBDRAW_H
# define LIBDRAW_H

#include "../minilibx/mlx.h"
#include "../Libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <fcntl.h>

typedef struct	s_line
{
	t_pt		start;
	t_pt		end;
	int			dx;
	int			dy;
}				t_line;

typedef struct	s_img
{
	char		*data;
	void		*p_img;
	int			width;
	int			bpp;
	int			max_size;
	int			endian;
}				t_img;

typedef struct	s_mlx
{
	void		*p_mlx;
	void		*p_win;
	int			X;
	int			Y;
	t_img		*mlx_img;
}				t_mlx;

typedef struct	s_vector
{
	float		x;
	float		y;
	float		z;
}				t_vector;

typedef struct	s_matrix
{
	t_vector	x;
	t_vector	y;
	t_vector	z;
	t_pt		pos;
}				t_matrix;

typedef struct	s_matrix_rot
{
	t_matrix	mx;
	t_matrix	my;
	t_matrix	mz;
	t_matrix	m;
}				t_matrix_rot;

typedef struct	s_3Dpt
{
	int			x;
	int			y;
	int			z;
}				t_3Dpt;

t_mlx			*ft_mlx_init(t_mlx *mlx, int size_x, int size_y, char *title);
void			ft_new_image(t_mlx *mlx);
void			ft_draw_pixel(t_mlx *mlx, int color, t_pt pt);
t_pt			ft_make_pt(int x, int y);
t_pt			ft_apply_matrix(t_3Dpt pt, t_matrix m);
t_3Dpt			ft_make_3Dpt(int x, int y, int z);
t_3Dpt			**ft_del_tab_pts(t_3Dpt **tab);
t_line			ft_make_line(int x1, int y1, int x2, int y2);
t_vector		ft_make_vector(float x, float y, float z);
t_matrix		ft_make_matrix_x(float rad);
t_matrix		ft_make_matrix_y(float rad);
t_matrix		ft_make_matrix_z(float rad);
t_matrix		ft_multiply_matrix(t_matrix m1, t_matrix m2);
t_matrix		ft_init_matrix(t_pt pos);
void			ft_draw_line(t_line line, t_mlx *mlx, int color);
void			ft_draw_circle(t_mlx *mlx, t_pt center, int size, int color);
void			ft_clear_mlx(t_mlx *mlx);
void			ft_flush_img(t_mlx *x);

#endif
