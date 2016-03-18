/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:03:10 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/18 14:22:11 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "../gnl/get_next_line.h"
# include "../libft/libft.h"
# include "../minilibx/mlx.h"
# include "../Libdraw/libdraw.h"
# include "X.h"

typedef struct			s_lstline
{
	struct s_lstline	*next;
	char				*line;
}						t_lstline;

typedef struct			s_array
{
	t_3dpt				**tab_pt;
	t_pt				**end_tab;
	int					**tab;
	t_lstline			*list;
	int					max_size_x;
	int					y;
	int					*nb_x_line;
	int					max_z;
	int					min_z;
}						t_array;

typedef struct			s_fdf
{
	t_array				*array;
	t_mlx				*mlx;
	int					key;
	t_vector			rad;
	t_pt				pos;
	t_vector			scale;
}						t_fdf;

t_array					*ft_create_array(t_array *array, int fd);
t_array					*ft_new_tab(t_lstline *list, t_array *array);
int						ft_check_line(char *line);
t_fdf					*ft_reset_tab(t_fdf *fdf);
t_array					*ft_del_array(t_array *array);
t_lstline				*ft_del_list(t_lstline *begin);
t_fdf					*ft_init_fdf(t_mlx *mlx, t_array *array);
t_array					*ft_alloc_array(t_array *array);
t_3dpt					**ft_alloc_tab_pt(t_array *a);
t_fdf					*ft_del_tab(t_fdf *fdf);
t_pt					**ft_alloc_end_tab(t_array *a);
void					ft_fill_end_tab(t_array *a, t_matrix m);
t_array					*ft_new_tab_pt(t_array *array);
t_array					*ft_del_tab_pt(t_array *array);
void					ft_fdf_add_scale(t_array *array, t_vector scale);
void					ft_fdf_add_pos(t_array *a, t_pt pos);
void					ft_fdf(t_fdf *fdf);
void					ft_fdf_draw(t_array *a, t_mlx *mlx);
int						ft_fdf_event(int keycode, t_fdf *fdf);
void					ft_fdf_exit(t_fdf *fdf);
void					ft_rad_mod(t_fdf *fdf);
void					ft_pos_mod(t_fdf *fdf);
void					ft_scale_mod(t_fdf *fdf);
void					ft_pre_fdf(t_array *array);

#endif
