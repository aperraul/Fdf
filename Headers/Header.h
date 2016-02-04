/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:03:10 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/04 18:09:22 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "get_next_line.h"
# include "../Libft/libft.h"
# include "mlx.h"
# include "Libdraw.h"

typedef struct			s_array
{
	t_3Dpt				**tab_pt;
	int					**tab;
	int					y;
	int					*nb_x_line;
}						t_array;

typedef struct			s_lstline
{
	struct	s_lstline	*next;
	char				*line;
}						t_lstline;

t_array					*ft_create_array(t_array *array, int fd);
t_array					*ft_new_tab(t_lstline *list, t_array *array);
int						ft_check_line(char *line);
void					ft_del_array(t_array *array);
void					ft_del_list(t_lstline *begin);

#endif
