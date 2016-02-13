/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 14:47:28 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/12 11:32:55 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

t_mlx	*ft_mlx_init(t_mlx *mlx, int size_x, int size_y, char *title)
{
	mlx = (t_mlx *)ft_memalloc(sizeof(t_mlx));
	mlx->p_mlx = mlx_init();
	mlx->X = size_x;
	mlx->Y = size_y;
	mlx->p_win = mlx_new_window(mlx->p_mlx, mlx->X, mlx->Y, title);
	ft_new_image(mlx);
	return (mlx);
}
