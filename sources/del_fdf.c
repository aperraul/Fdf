/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_fdf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 17:24:34 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/16 12:22:51 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

t_array		*ft_del_tab_pt(t_array *array)
{
	int		i;

	if (!array->tab_pt)
		return (NULL);
	i = -1;
	while (array->tab_pt[++i])
		ft_memdel((void **)&array->tab_pt[i]);
	ft_memdel((void **)array->tab_pt);
	return (array);
}

t_lstline	*ft_del_list(t_lstline *begin)
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

t_array		*ft_del_array(t_array *array)
{
	int		i;

	i = -1;
	if (array)
	{
		if (array->list)
			ft_del_list(array->list);
		if (array->tab_pt)
			ft_del_tab_pts(array->tab_pt);
		if (array->end_tab)
			ft_free_pt(array->end_tab);
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

t_fdf		*ft_del_tab(t_fdf *fdf)
{
	int	i;

	i = -1;
	while (fdf->array->tab[++i])
		ft_memdel((void **)&fdf->array->tab[i]);
	ft_memdel((void **)fdf->array->tab);
	return (fdf);
}
