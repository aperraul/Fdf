/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 15:05:27 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/13 14:44:29 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

void	ft_fdf(t_fdf *fdf)
{
	t_matrix_rot	rot;
	t_array			*a;

	a = fdf->array;
	rot.mx = ft_make_matrix_x(fdf->rad.x);
	rot.my = ft_make_matrix_y(fdf->rad.y);
	rot.mz = ft_make_matrix_z(fdf->rad.z);
	rot.m = ft_multiply_matrix(ft_multiply_matrix(rot.mx, rot.my), rot.mz);
	rot.m.pos = fdf->pos;
	if (!a->end_tab)
		a->end_tab = ft_alloc_end_tab(a);
	ft_fill_end_tab(a, rot.m);
	ft_fdf_add_pos(a, rot.m.pos);
	ft_fdf_draw(a, fdf->mlx);
	ft_flush_img(fdf->mlx);
}