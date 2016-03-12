/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_fdf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 17:10:05 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/12 18:00:16 by aperraul         ###   ########.fr       */
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
	ft_fdf(fdf);
	mlx_hook(mlx->p_win, KeyPress, KeyPressMask, ft_fdf_event, fdf);
	mlx_loop(fdf->mlx);
}