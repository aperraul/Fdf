/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 13:09:04 by aperraul          #+#    #+#             */
/*   Updated: 2016/01/25 15:11:14 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

int		main()
{
	t_mlx	*mlx;
	t_pt	pt;

	pt.y = 20;
	mlx = ft_mlx_init(mlx, 400, 400, "FDF");
	while (pt.y < 40)
	{
		pt.x = 20;
		while (pt.x < 40)
		{
			mlx_pixel_put(mlx->p_mlx, mlx->p_win, pt.x, pt.y, 0x00FF0000);
//			ft_draw_pixel(mlx, 0x00FFFFFF, pt);
			pt.x++;
		}
		pt.y++;
	}
	mlx_loop(mlx);
}
