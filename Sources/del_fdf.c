/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_fdf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 17:24:34 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/04 18:09:17 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

void	ft_del_array(t_array *array)
{
	int		i;

	i = -1;
	if (i <= array->y)
	{
		ft_putstr("YOLO\n");
		while (array->tab_pt[++i])
			ft_memdel((void **)&array->tab_pt[i]);
	}
	ft_memdel((void **)array->tab_pt);
	i = -1;
		while (array->tab[++i])
		ft_memdel((void **)&array->tab[i]);
	ft_memdel((void **)array->tab);
	ft_memdel((void **)&array->nb_x_line);
	ft_memdel((void **)&array);
}

void	ft_del_list(t_lstline *begin)
{
	t_lstline	*temp;

	if (!begin)
		return ;
	while (begin)
	{
		temp = begin->next;
		ft_memdel((void **)&begin->line);
		ft_memdel((void **)&begin);
		begin = temp;
	}
}
