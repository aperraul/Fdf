/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 15:05:27 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/16 11:53:37 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

void	ft_fdf(t_fdf *fdf)
{
	t_matrix_rot	rot;

	ft_reset_tab(fdf);
	ft_reset_img(fdf->mlx, 0x000000);
	ft_scale_mod(fdf, fdf->array);
	ft_rad_mod(fdf);
	ft_pos_mod(fdf);
	rot.mx = ft_make_matrix_x(fdf->rad.x);
	rot.my = ft_make_matrix_y(fdf->rad.y);
	rot.mz = ft_make_matrix_z(fdf->rad.z);
	rot.m = ft_multiply_matrix(ft_multiply_matrix(rot.mx, rot.my), rot.mz);
	rot.m.pos = fdf->pos;
	if (!fdf->array->end_tab)
		fdf->array->end_tab = ft_alloc_end_tab(fdf->array);
	ft_fill_end_tab(fdf->array, rot.m);
	ft_fdf_add_pos(fdf->array, rot.m.pos);
	ft_fdf_draw(fdf->array, fdf->mlx);
	ft_flush_img(fdf->mlx);
}
