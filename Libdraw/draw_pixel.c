/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_pixel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 12:59:10 by aperraul          #+#    #+#             */
/*   Updated: 2016/01/25 15:47:38 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

void		ft_draw_pixel(t_mlx *mlx, int color, t_pt pt)
{
	int		position;
	int		octet;

	octet = mlx->mlx_img->bpp / 8;
	position = (pt.y * mlx->mlx_img->width) + (pt.x * octet);
	if (ft_memcmp(mlx->mlx_img->data + position, &color, (unsigned)octet) != 0)
		ft_memcpy(mlx->mlx_img->data + position, &color, (unsigned)octet);
}
