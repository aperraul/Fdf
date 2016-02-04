/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_2Dtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 15:17:46 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/04 15:22:03 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

t_array		*ft_new_tab(t_lstline *list, t_array *array)
{
	int		k;
	int		a;
	int		i;
	char	**str;

	a = -1;
	array->tab = (int **)ft_memalloc(sizeof(int *) * (array->y + 1));
	array->nb_x_line = (int *)ft_memalloc(sizeof(int) * (array->y + 1));
//	array->nb_x_line = (int **)ft_memalloc(sizeof(int *) * (array->y));
//	i = -1;
//	while (++i <= array->y)
//		array->nb_x_line[i] = (int *)ft_memalloc(sizeof(int));
	while (++a <= array->y)
	{
		str = ft_strsplit(list->line, ' ');
		array->nb_x_line[a] = ft_memlen((void **)str);
		ft_putnbr(array->nb_x_line[a]);
//		*array->nb_x_line[a] = (int)ft_strlen((char *)str);
		array->tab[a] = (int *)ft_memalloc(sizeof(int) * (/***/array->nb_x_line[a] + 1));
		i = -1;
		ft_putchar('G');
		while (str[++i])
		{
			ft_putchar('X');
			array->tab[a][i] = ft_atoi(str[i]);
		}
		k = 0;
		while (str[k])
		{
			ft_memdel((void **)&str[k]);
			k++;
		}
		ft_memdel((void **)str);
		list = list->next;
		ft_putchar('C');
	}
	return (array);
}
