/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_window_init.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 15:02:00 by aperraul          #+#    #+#             */
/*   Updated: 2016/01/23 15:32:43 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

void	ft_mlx_init(t_mlx *mlx, int size_x, int size_y, char *title)
{
	mlx->ptr_mlx = *mlx_init();
	mlx->size_x = size_x;
	mlx->size_y = size_y;
	mlz->ptr_win = mlx_new_window(mlx.mlx, mlx.size_x, mlx_size_y, mlx_title);
}
