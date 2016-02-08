/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_flush_img.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/05 12:12:06 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/08 15:30:45 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

void	ft_flush_img(t_mlx *x)
{
	mlx_put_image_to_window(x->p_mlx, x->p_win, x->mlx_img->p_img, 0, 0);
}
