/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_init.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 15:02:00 by aperraul          #+#    #+#             */
/*   Updated: 2016/01/25 12:46:55 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

void	ft_mlx_init(t_mlx *mlx, int size_x, int size_y, char *title)
{
	mlx->p_mlx = mlx_init();
	mlx->X = size_x;
	mlx->Y = size_y;
	mlx->p_win = mlx_new_window(mlx->p_mlx, mlx->X, mlx->Y, mlx->title);
	ft_new_image(mlx);
}
