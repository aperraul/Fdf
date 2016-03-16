/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:17:10 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/16 15:07:21 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

t_lstline	*ft_next_list(void)
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
	return (begin);
}

t_array		*ft_create_array(t_array *a, int fd)
{
	int			nb_lines;
	char		*line;
	int			nb_char;

	line = NULL;
	nb_lines = 0;
	while (get_next_line(fd, &line) > 0)
	{
		if ((nb_char = ft_check_line(line)) == 0)
		{
			a = ft_del_array(a);
			return (a);
		}
		a->list = ft_add_list(a->list, line);
		nb_lines++;
	}
	if (nb_lines == 0 || (nb_lines == 1 && nb_char == 1))
	{
		a = ft_del_array(a);
		return (a);
	}
	a->y = nb_lines;
	a = ft_new_tab(a->list, a);
	a->tab_pt = ft_alloc_tab_pt(a);
	return (a);
}
