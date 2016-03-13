/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf_add_scale.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 13:08:18 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/13 17:33:51 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

void	ft_fdf_add_scale(t_array *array, t_vector scale)
{
	t_pt	pt;
//	int		i;
//	int		j;

	array = ft_new_tab_pt(array);
	ft_putnbr(array->tab_pt[3][2].z);
//	j = -1;
//	while (++j < array->y)
//	{
//		ft_putstr("\nline : ");
//		ft_putnbr(j);
//		i = -1;
//		while (++i < array->nb_x_line[j])
//		{
//			ft_putstr("||  x = ");
//			ft_putnbr(i);
//			ft_putstr(" / z = ");
//			ft_putnbr(array->tab_pt[j][i].z);
//			ft_putstr(";  ");
//		}
//	}
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
