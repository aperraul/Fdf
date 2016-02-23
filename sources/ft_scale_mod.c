/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scale_mod.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 14:33:05 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/23 15:41:23 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"
static	void	ft_x_scale(t_fdf *fdf, t_array *a)
{
	if (fdf->key == 12 || fdf->key == 13)
	{
		if (fdf->key == 13)
			fdf->scale.x *= 1.1f;
		else
			fdf->scale.x /= 1.1f;
		ft_fdf_add_scale(a, fdf->scale);
	}
}

#include <stdio.h>

static	void	ft_y_scale(t_fdf *fdf, t_array *a)
{
	if (fdf->key == 1 || fdf->key == 0)
	{
		if (fdf->key == 1)
			fdf->scale.y *= 1.1f;
		else
			fdf->scale.y /= 1.1f;
		ft_fdf_add_scale(a, fdf->scale);
	}
}

static	void	ft_z_scale(t_fdf *fdf, t_array *a)
{
	if (fdf->key == 7 || fdf->key == 6)
	{
		if (fdf->key == 7)
			fdf->scale.z *= 1.1f;
		else
			fdf->scale.z /= 1.1f;
		ft_fdf_add_scale(a, fdf->scale);
	}
}

static	void	ft_size_mod(t_fdf *fdf, t_array *a)
{
	if (fdf->key == 24)
	{
		fdf->scale.x *= 1.1f;
		fdf->scale.y *= 1.1f;
		fdf->scale.z *= 1.1f;
		ft_fdf_add_scale(a, fdf->scale);
	}
	else if (fdf->key == 27)
	{
		fdf->scale.x /= 1.1f;
		fdf->scale.y /= 1.1f;
		fdf->scale.z /= 1.1f;
		ft_fdf_add_scale(a, fdf->scale);
	}
}

void			ft_scale_mod(t_fdf *fdf, t_array *a)
{
	ft_size_mod(fdf, a);
	ft_x_scale(fdf, a);
	ft_y_scale(fdf, a);
	ft_z_scale(fdf, a);
}
