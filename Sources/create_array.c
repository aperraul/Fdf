/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:17:10 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/03 16:46:38 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

t_lstline		*ft_next_list()
{
	t_lstline	*list;

	list = (t_lstline *)malloc(sizeof(t_lstline));
	list->next = NULL;
	list->line = NULL;
	return (list);
}

t_lstline	*ft_add_list(t_lstline *begin, char *line)
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
	return (list);
}

t_array		*ft_create_array(t_array *array, int fd)
{
	t_lstline	*list;
	int			nb_lines;
	int			state;
	char		*line;

	state = 1;
	nb_lines = 0;
	while ((state = get_next_line(fd, &line)) > 0)
	{
		list = ft_add_list(list, line);
		nb_lines++;
	}
	array->y = nb_lines;
	array = ft_new_tab(list, array);
	return (array);
}
