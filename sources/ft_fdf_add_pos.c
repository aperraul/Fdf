/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf_add_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 12:51:15 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/12 16:51:14 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

void	ft_fdf_add_pos(t_array *a, t_pt pos)
{
	int		i;
	int		j;

	j = -1;
	while (++j < a->y)
	{
		i = -1;
		while (i++ < a->nb_x_line[j])
		{
			a->end_tab[j][i].x += pos.x;
			a->end_tab[j][i].y += pos.y;
		}
	}
}
