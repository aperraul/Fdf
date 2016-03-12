/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset_img.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 11:29:17 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/12 16:38:46 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/libdraw.h"

void	ft_reset_img(t_mlx *mlx, int color)
{
	int		octet;
	int		position;
	char	*img;

	img = mlx->mlx_img->data;
	octet = mlx->mlx_img->bpp / 8;
	position = 0;
	while (position < mlx->mlx_img->max_size)
	{
		ft_memcpy(img + position, &color, octet);
		position += octet;
	}
}
