/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 15:05:27 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/08 17:17:02 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

void	ft_fdf(t_fdf *fdf)
{
	t_matrix_rot	rot;
	t_array			*a;
	int	x;
	int	y;

	a = fdf->array;
	rot.mx = ft_make_matrix_x(fdf->rad.x);
	rot.my = ft_make_matrix_y(fdf->rad.y);
	rot.mz = ft_make_matrix_z(fdf->rad.z);
	rot.m = ft_multiply_matrix(ft_multiply_matrix(rot.mx, rot.my), rot.mz);
	if (!a->end_tab)
		a->end_tab = ft_alloc_end_tab(a);
	a->end_tab = ft_fill_end_tab(a, rot.m);
	y = -1;
	while (++y < a->y)
	{
		x = -1;
		while (++x < a->nb_x_line[y])
		{
			ft_putstr("{[x = ");
			ft_putnbr(a->end_tab[y][x].x);
			ft_putstr(" ]; [y = ");
			ft_putnbr(a->end_tab[y][x].y);
			ft_putstr("]}   ");
		}
	}
	ft_fdf_add_pos(a, rot.m.pos);
	ft_fdf_draw(a, fdf->mlx);
	ft_flush_img(fdf->mlx);
}
