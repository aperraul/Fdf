/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libdraw.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 14:57:31 by aperraul          #+#    #+#             */
/*   Updated: 2016/01/25 12:53:06 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBDRAW_H
# define LIBDRAW_H

#include "../minilibx/mlx.h"
#include "../Libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

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
	char		*title;
	t_img		*mlx_img;
}				t_mlx;

typedef struct	s_3Dpt
{
	int			x;
	int			y;
	int			z;
}				t_3Dpt;

void			ft_mlx_init(t_mlx *mlx, int size_x, int size_y, char *title);
void			ft_new_image(t_mlx *mlx);

#endif
