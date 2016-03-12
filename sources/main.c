/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 16:56:33 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/12 16:55:53 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

int		main(int argc, char **argv)
{
	int			fd;
	t_array		*array;
	t_fdf		*fdf;
	t_mlx		*mlx;

	mlx = NULL;
	if (argc == 2)
	{
		array = NULL;
		fdf = NULL;
		if((fd = open(argv[1], O_RDONLY)) == -1)
			return (0);
		if (!(array = ft_alloc_array(array)))
			return (0);
		if (!(array = ft_create_array(array, fd)))
		{
			close(fd);
			ft_putstr("bad line");
			return (0);
		}
		close(fd);
		mlx = ft_mlx_init(mlx, 800, 800, "FDF");
		fdf = ft_init_fdf(mlx, array);
		ft_fdf_add_scale(array, fdf->scale);
		ft_fdf(fdf);
		mlx_hook(mlx->p_win, KeyPress, KeyPressMask, ft_fdf_event, fdf);
		mlx_loop(fdf->mlx);
	}
	else
		ft_putstr("erreur");
	return (0);
}
