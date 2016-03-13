/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_end_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 12:29:26 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/13 15:51:39 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

void	ft_fill_end_tab(t_array *a, t_matrix m)
{
	int		i;
	int		j;

	j = -1;
	while (++j < a->y)
	{
		i = -1;
		while (++i < a->nb_x_line[j])
			a->end_tab[j][i] = ft_apply_matrix(a->tab_pt[j][i], m);
	}
}
