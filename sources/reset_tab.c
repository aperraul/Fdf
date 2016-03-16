/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 11:32:32 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/16 15:15:56 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

t_fdf	*ft_reset_tab(t_fdf *fdf)
{
	t_lstline	*lst;
	char		**str;
	int			i;
	int			j;

	if (fdf->array->tab)
		ft_del_tab(fdf);
	lst = fdf->array->list;
	j = -1;
	fdf->array->tab = (int **)ft_memalloc(sizeof(int *) * (fdf->array->y + 1));
	while (++j < fdf->array->y)
	{
		str = ft_strsplit(lst->line, ' ');
		fdf->array->tab[j] = (int *)ft_memalloc(sizeof(int) *
				(fdf->array->nb_x_line[j] + 1));
		i = -1;
		while (str[++i])
			fdf->array->tab[j][i] = ft_atoi(str[i]);
		i = -1;
		while (str[++i])
			ft_memdel((void **)&str[i]);
		ft_memdel((void **)str);
		lst = lst->next;
	}
	return (fdf);
}
