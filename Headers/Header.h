/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:03:10 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/22 16:37:39 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "get_next_line.h"
# include "../libft/libft.h"
# include "mlx.h"
# include "Libdraw.h"
# include "X.h"

typedef struct			s_array
{
	t_3Dpt				**tab_pt;
	t_pt				**end_tab;
	int					**tab;
	int					max_size_x;
	int					y;
	int					*nb_x_line;
}						t_array;

typedef struct			t_fdf
{
	t_array				*array;
	t_mlx				*mlx;
	int					key;
	t_vector			rad;
	t_pt				pos;
	t_3Dpt				scale;
}						t_fdf;

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
t_fdf					*ft_init_fdf(t_mlx *mlx, t_array *array);
t_array					*ft_alloc_array(t_array *array);
t_3Dpt					**ft_alloc_tab_pt(t_array *a);
t_pt					**ft_alloc_end_tab(t_array *a);
void					ft_fill_end_tab(t_array *a, t_matrix m);
t_array					*ft_new_tab_pt(t_array *array);
void					ft_fdf_add_scale(t_array *array, t_3Dpt scale);
void					ft_fdf_add_pos(t_array *a, t_pt pos);
void					ft_fdf(t_fdf *fdf);
void					ft_fdf_draw(t_array *a, t_mlx *mlx);
int						ft_fdf_event(int keycode, t_fdf *fdf);
void					ft_fdf_exit(t_fdf *fdf);

#endif
