/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libdraw.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 14:57:31 by aperraul          #+#    #+#             */
/*   Updated: 2016/01/23 15:34:15 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBDRAW_H
# define LIBDRAW_H

#include "../minilibx/mlx.h"

typedef struct	s_mlx
{
	void		*ptr_mlx;
	void		*ptr_win;
	int			size_x;
	int			size_y;
	char		*title;
}				t_mlx;

typedef struct	s_3Dpt
{
	int			x;
	int			y;
	int			z;
}				t_3Dpt;

void			ft_mlw_init(t_mlx *mlx, int size_x, int size_y, char *title);

#endif
