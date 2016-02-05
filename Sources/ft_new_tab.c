/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 16:39:43 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/05 13:38:49 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

t_array		*ft_new_tab(t_lstline *list, t_array *a)
{
	int		k;
	int		j;
	int		i;
	char	**str;

	j = -1;
	a->tab = (int **)ft_memalloc(sizeof(int *) * (a->y + 1));
	a->nb_x_line = (int *)ft_memalloc(sizeof(int) * (a->y + 1));
	while (++j < a->y)
	{
		str = ft_strsplit(list->line, ' ');
		a->nb_x_line[j] = ft_memlen((void **)str);
		a->tab[j] = (int *)ft_memalloc(sizeof(int) * (a->nb_x_line[j] + 1));
		i = -1;
		while (str[++i])
			a->tab[j][i] = ft_atoi(str[i]);
		k = -1;
		while (str[++k])
			ft_memdel((void **)&str[k]);
		ft_memdel((void **)str);
		list = list->next;
	}
	return (a);
}
