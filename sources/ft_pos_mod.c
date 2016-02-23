/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 16:14:24 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/23 16:20:44 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

void	ft_pos_mod(t_fdf *fdf)
{
	if (fdf->key == 32 || fdf->key == 38)
	{
		if (fdf->key == 32)
			fdf->pos.y -= 10;
		else
			fdf->pos.y += 10;
	}
	if (fdf->key == 4 || fdf->key == 40)
	{
		if (fdf->key == 4)
			fdf->pos.x -= 10;
		else
			fdf->pos.x += 10;
	}
}
