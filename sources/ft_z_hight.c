/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_z_hight.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 14:30:41 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/25 14:39:22 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

void	ft_z_hight(t_array *a)
{
	int		i;
	int		j;

	j = -1;
	while (++j < a->y)
	{
		i = -1;
		while (++i < a->nb_x_line[j])
		{
			if (a->tab_pt[j][i].z > a->max_z)
				a->max_z = a->tab_pt[j][i].z;
			if (a->tab_pt[j][i].z < a->min_z)
				a->min_z = a->tab_pt[j][i].z;
		}
	}
}
