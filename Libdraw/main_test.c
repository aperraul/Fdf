/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 13:09:04 by aperraul          #+#    #+#             */
/*   Updated: 2016/01/27 13:29:57 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

int		main()
{
	t_mlx	*mlx;
	t_line	line;
	int		x1;
	int		y1;
	int		x2;
	int		y2;


	x1 = 300;
	y1 = 300;
	x2 = 600;
	y2 = 300;
	mlx = NULL;
	mlx = ft_mlx_init(mlx, 800, 800, "FDF");
	while (x2 > x1)
	{
	line = ft_make_line(x1, y1, x2, y2);
	ft_draw_line(line, mlx, 0xffffff);
	x2--;
	y2--;
	}
	while (y2 < y1)
	{
	line = ft_make_line(x1, y1, x2, y2);
	ft_draw_line(line, mlx, 0xffffff);
	x2--;
	y2++;
	}
	while (x2 < x1)
	{
	line = ft_make_line(x1, y1, x2, y2);
	ft_draw_line(line, mlx, 0xffffff);
	x2++;
	y2++;
	}
	while (y2 > y1)
	{
	line = ft_make_line(x1, y1, x2, y2);
	ft_draw_line(line, mlx, 0xffffff);
	x2++;
	y2--;
	}

	mlx_put_image_to_window(mlx->p_mlx, mlx->p_win, mlx->mlx_img->p_img, 0, 0);
	mlx_loop(mlx->p_mlx);
	return (0);
}
