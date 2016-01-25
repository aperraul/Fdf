/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 13:09:04 by aperraul          #+#    #+#             */
/*   Updated: 2016/01/25 18:29:09 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

int		main()
{
	t_mlx	*mlx;
	t_line	line;

	mlx = ft_mlx_init(mlx, 400, 400, "FDF");
	line = ft_make_line(100, 50, 230, 40);
	ft_draw_line(line, mlx, 0x00FF00);
	mlx_put_image_to_window(mlx->p_mlx, mlx->p_win, mlx->mlx_img->p_img, 0, 0);
	mlx_loop(mlx);
}
