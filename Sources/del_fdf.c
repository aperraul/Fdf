/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_fdf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 17:24:34 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/05 13:44:18 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

t_array		*ft_del_array(t_array *array)
{
	int		i;

	i = -1;
	if (array)
	{
		if (array->tab_pt)
		{
			while (array->tab_pt[++i])
				ft_memdel((void **)&array->tab_pt[i]);
			ft_memdel((void **)array->tab_pt);
		}
		i = -1;
		if (array->tab)
		{
			while (array->tab[++i])
				ft_memdel((void **)&array->tab[i]);
			ft_memdel((void **)array->tab);
		}
		if (array->nb_x_line)
			ft_memdel((void **)&array->nb_x_line);
		ft_memdel((void **)&array);
	}
	return (array);
}

t_lstline		*ft_del_list(t_lstline *begin)
{
	t_lstline	*temp;

	if (!begin)
		return (NULL);
	while (begin)
	{
		temp = begin->next;
		ft_memdel((void **)&begin->line);
		ft_memdel((void **)&begin);
		begin = temp;
	}
	return (begin);
}
