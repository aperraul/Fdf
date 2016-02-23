/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf_add_scale.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:08:18 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/23 15:41:19 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

void	ft_fdf_add_scale(t_array *array, t_vector scale)
{
	t_pt	pt;
	array = ft_new_tab_pt(array);
	pt.y = -1;
	while (++pt.y < array->y)
	{
		pt.x = -1;
		while (++pt.x < array->nb_x_line[pt.y])
		{
			array->tab_pt[pt.y][pt.x].x *= scale.x;
			array->tab_pt[pt.y][pt.x].y *= scale.y;
			array->tab_pt[pt.y][pt.x].z *= scale.z;
		}
	}
}
