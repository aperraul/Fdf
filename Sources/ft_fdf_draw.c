/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf_draw.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 12:56:40 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/08 13:19:44 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

static	void	ft_fdf_draw_ver(t_array *a, t_mlx *mlx)
{
	int		i;
	int		j;
	t_line	line;
	t_pt	p1;
	t_pt	p2;

	j = -1;
	while (++j < (a->y -1))
	{
		i = -1;
			while (++i < (a->nb_x_line[j] -1))
			{
				p1.x = a->end_tab[j][i].x;
				p1.y = a->end_tab[j][i].y;
				p2.x = a->end_tab[j][i + 1].x;
				p2.y = a->end_tab[j][i + 1].y;
				line = ft_make_line(p1.x, p1.y, p2.x, p2.y);
				ft_draw_line(line, mlx, 0xff0000);
			}
	}
}

static	void	ft_fdf_draw_hor(t_array *a, t_mlx *mlx)
{
	int		i;
	int		j;
	t_line	line;
	t_pt	p1;
	t_pt	p2;

	i = -1;
	j = 0;
	while (++i < (a->nb_x_line[j] -1))
	{
		j = -1;
			while (++j < (a->y -1))
			{
				p1.x = a->end_tab[j][i].x;
				p1.y = a->end_tab[j][i].y;
				p2.x = a->end_tab[j + 1][i].x;
				p2.y = a->end_tab[j + 1][i].y;
				line = ft_make_line(p1.x, p1.y, p2.x, p2.y);
				ft_draw_line(line, mlx, 0xff0000);
			}
	}
}

void	ft_fdf_draw(t_array *a, t_mlx *mlx)
{
	ft_fdf_draw_ver(a, mlx);
	ft_fdf_draw_hor(a, mlx);
}