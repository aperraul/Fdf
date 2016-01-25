/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 16:05:40 by aperraul          #+#    #+#             */
/*   Updated: 2016/01/25 12:53:16 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

void		ft_new_image(t_mlx *mlx)
{
	t_img	*img;
	void	*a;

	if (!(img = (t_img *)malloc(sizeof(t_img))))
		return ;
	img->endian = 0;
	img->width = mlx->X;
	img->p_img = mlx_new_image(mlx->p_mlx, mlx->X, mlx->Y);
	if (!(img->p_img))
		return ;
	a = mlx_get_data_addr(img->p_img, &img->bpp, &img->width, &img->endian);
	img->data = a;
	mlx->mlx_img = img;
	mlx->mlx_img->max_size = (img->bpp / 8) * mlx->X * mlx->Y;
}
