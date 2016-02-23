/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rad_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 16:36:20 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/23 11:40:19 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

void	ft_rad_mod(t_fdf *fdf)
{
	float	rad;

	rad = (M_PI / 30);
	if (fdf->key == 126 || fdf->key == 125)
	{
		if (fdf->key == 126)
			fdf->rad.x += rad;
		else
			fdf->rad.x -= rad;
	}
	else if (fdf->key == 123 || fdf->key == 124)
	{
		if (fdf->key == 124)
			fdf->rad.y += rad;
		else
			fdf->rad.y -= rad;
	}
	else if (fdf->key == 69 || fdf->key == 78)
	{
		if (fdf->key == 69)
			fdf->rad.z += rad;
		else
			fdf->rad.z -= rad;
	}
}
