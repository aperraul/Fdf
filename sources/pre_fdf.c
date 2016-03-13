/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_fdf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 17:10:05 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/13 17:35:17 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

void	ft_pre_fdf(t_mlx *mlx, t_array *array)
{
	t_fdf	*fdf;

	fdf = NULL;
	mlx = ft_mlx_init(mlx, 800, 800, "FDF");
	fdf = ft_init_fdf(mlx, array);
	ft_fdf_add_scale(array, fdf->scale);
	ft_putnbr(array->tab_pt[3][2].z); //
	ft_fdf(fdf);
	ft_putnbr(array->tab_pt[3][2].z); //
	mlx_hook(mlx->p_win, KeyPress, KeyPressMask, ft_fdf_event, fdf);
	mlx_loop(fdf->mlx);
}
