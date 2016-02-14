/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_fdf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/05 11:34:35 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/14 16:20:41 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

t_array		*ft_alloc_array(t_array *array)
{
	if (!(array = (t_array *)malloc(sizeof(t_array))))
		return (NULL);
	array->tab_pt = NULL;
	array->end_tab = NULL;
	array->tab = NULL;
	array->max_size_x = 0;
	array->y = 0;
	array->nb_x_line = NULL;
	return (array);
}

t_3Dpt		**ft_alloc_tab_pt(t_array *a)
{
	t_3Dpt		**tab3;
	int			b;

	tab3 = (t_3Dpt **)ft_memalloc(sizeof(t_3Dpt *) * (a->y + 1));
	b = -1;
	while (++b < a->y)
		tab3[b] = (t_3Dpt *)ft_memalloc(sizeof(t_3Dpt) * (a->nb_x_line[b] + 1));
	return (tab3);
}

t_pt	**ft_alloc_end_tab(t_array *a)
{
	t_pt	**end_tab;
	int		b;

	end_tab = (t_pt **)ft_memalloc(sizeof(t_pt *) * (a->y + 1));
	b = -1;
	while (++b < a->y)
		end_tab[b] = (t_pt *)ft_memalloc(sizeof(t_pt) * (a->nb_x_line[b] + 1));
	return (end_tab);
}
