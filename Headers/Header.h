/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:03:10 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/05 13:07:33 by aperraul         ###   ########.fr       */
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
	int					max_size_x;
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
t_array					*ft_del_array(t_array *array);
t_lstline				*ft_del_list(t_lstline *begin);
t_array					*ft_alloc_array(t_array *array);
t_3Dpt					**ft_alloc_tab_pt(t_array *array);
t_array					*ft_new_tab_pt(t_array *array);

#endif
