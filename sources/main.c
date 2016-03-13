/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 16:56:33 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/13 11:51:51 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

int		main(int argc, char **argv)
{
	int			fd;
	t_array		*array;
	t_mlx		*mlx;

	mlx = NULL;
	if (argc == 2)
	{
		array = NULL;
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			return (0);
		if (!(array = ft_alloc_array(array)))
			return (0);
		if (!(array = ft_create_array(array, fd)))
		{
			close(fd);
			ft_putstr("bad file");
			return (0);
		}
		close(fd);
		ft_pre_fdf(mlx, array);
	}
	else
		ft_putstr("erreur: nb arguments != 1");
	return (0);
}
