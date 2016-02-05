/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:17:10 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/05 13:44:14 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

t_lstline		*ft_next_list(void)
{
	t_lstline	*list;

	list = (t_lstline *)malloc(sizeof(t_lstline));
	list->next = NULL;
	list->line = NULL;
	return (list);
}

t_lstline		*ft_add_list(t_lstline *begin, char *line)
{
	t_lstline	*list;

	if (!(begin))
	{
		begin = ft_next_list();
		begin->line = line;
		return (begin);
	}
	list = begin;
	while (list->next)
		list = list->next;
	list->next = ft_next_list();
	list = list->next;
	list->line = line;
	return (begin);
}

t_array			*ft_create_array(t_array *array, int fd)
{
	t_lstline	*list;
	int			nb_lines;
	int			state;
	char		*line;

	line = NULL;
	list = NULL;
	state = 1;
	nb_lines = 0;
	while ((state = get_next_line(fd, &line)) > 0)
	{
		if (ft_check_line(line) == 0)
		{
			array = ft_del_array(array);
			list = ft_del_list(list);
			return (array);
		}
		list = ft_add_list(list, line);
		nb_lines++;
	}
	array->y = nb_lines;
	array = ft_new_tab(list, array);
	ft_putstr("YOOLOO");
	array = ft_new_tab_pt(array);
	ft_putstr("SALLUTT");
	return (array);
}
