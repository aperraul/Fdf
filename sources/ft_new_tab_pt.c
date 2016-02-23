/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_tab_pt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/05 12:37:38 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/23 12:28:01 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

t_array		*ft_new_tab_pt(t_array *array)
{
	t_pt	pt;
	t_pt	O;

	O = ft_make_pt((array->max_size_x / 2), (array->y / 2));
	pt.y = -1;
	while (++pt.y < array->y)
	{
		pt.x = -1;
		while (++pt.x < array->nb_x_line[pt.y])
		{
			array->tab_pt[pt.y][pt.x].x = pt.x - O.x;
			array->tab_pt[pt.y][pt.x].y = pt.y - O.y;
			array->tab_pt[pt.y][pt.x].z = array->tab[pt.y][pt.x];
		}
	}
	return (array);
}
