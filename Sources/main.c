/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 16:56:33 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/06 13:24:04 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

int		main(int argc, char **argv)
{
	int			fd;
	t_array		*array;
	t_fdf		*fdf;
	int			x;
	int			y;
	t_mlx		*mlx;

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
/*		y = 0;
		ft_putstr("max X = ");
		ft_putnbr(array->max_size_x);
		ft_putchar('\n');
		while (y < array->y)
		{
			ft_putstr("line ");
			ft_putnbr(y);
			x = 0;
			while (x < array->nb_x_line[y])
			{
				ft_putstr(", x");
				ft_putnbr(x);
				ft_putstr(" = ");
				ft_putnbr(array->tab[y][x]);
				x++;
			}
			ft_putchar('\n');
			y++;
		}
		y = 0;
		while (y < array->y)
		{
			ft_putstr("line ");
			ft_putnbr(y);
			x = 0;
			while (x < array->nb_x_line[y])
			{
				ft_putstr(" x");
				ft_putnbr(x);
				ft_putstr(" = ");
				ft_putstr("{[x -> ");
				ft_putnbr(array->tab_pt[y][x].x);
				ft_putstr("]; ");
				ft_putstr("[y -> ");
				ft_putnbr(array->tab_pt[y][x].y);
				ft_putstr("]; ");
				ft_putstr("[z -> ");
				ft_putnbr(array->tab_pt[y][x].z);
				ft_putstr("]} ||");
				x++;
			}
			ft_putchar('\n');
			y++;
		}*/
	}
	else
		ft_putstr("erreur");
	return (0);
}
