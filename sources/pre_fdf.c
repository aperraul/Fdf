/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_fdf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 17:10:05 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/16 15:45:30 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

void	ft_pre_fdf(t_array *array)
{
	t_fdf	*fdf;
	t_mlx	*mlx;

	mlx = NULL;
	fdf = NULL;
	mlx = ft_mlx_init(mlx, 800, 800, "FDF");
	fdf = ft_init_fdf(mlx, array);
	ft_fdf(fdf);
	mlx_hook(mlx->p_win, KeyPress, KeyPressMask, ft_fdf_event, fdf);
	mlx_loop(fdf->mlx);
}
