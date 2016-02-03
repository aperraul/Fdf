/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_2Dtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 15:17:46 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/03 16:54:39 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

t_array		*ft_new_tab(t_lstline *list, t_array *array)
{
	int		a;
	int		i;
	char	**str;

	a = 0;
	array->tab = (int **)ft_memalloc(sizeof(int *) * (array->y + 1));
	array->nb_x_line = (int **)ft_memalloc(sizeof(int *) * (array->y + 1));
	i = -1;
	while (++i < array->y)
		array->nb_x_line[i] = (int *)ft_memalloc(sizeof(int));
	while (a < array->y)
	{
		str = ft_strsplit(list->line, ' ');
		*array->nb_x_line[a] = (int)ft_strlen((char *)str);
		array->tab[a] = (int *)ft_memalloc(sizeof(int) * (*array->nb_x_line[a] + 1));
		i = -1;
		while (str[++i])
			array->tab[a][i] = ft_atoi(str[i]);
		while (str[--i])
			ft_memdel((void **)&str[i]);
		ft_memdel((void **)str);
		a++;
	}
	return (array);
}
