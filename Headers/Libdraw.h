/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libdraw.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 14:57:31 by aperraul          #+#    #+#             */
/*   Updated: 2016/01/25 18:00:15 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBDRAW_H
# define LIBDRAW_H

#include "../minilibx/mlx.h"
#include "../Libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

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
t_3Dpt			ft_make_3Dpt(int x, int y, int z);
t_line			ft_make_line(int x1, int y1, int x2, int y2);
void			ft_draw_line(t_line line, t_mlx *mlx, int color);

#endif
