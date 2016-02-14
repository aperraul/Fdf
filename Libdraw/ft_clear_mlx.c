/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_mlx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 16:12:41 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/14 16:14:29 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

void	ft_clear_mlx(t_mlx *mlx)
{
	mlx_destroy_image(mlx->p_mlx, mlx->mlx_img);
	mlx_clear_window(mlx->p_mlx, mlx->p_win);
	mlx_destroy_window(mlx->p_mlx, mlx->p_win);
	ft_memdel((void **)&mlx);
}
