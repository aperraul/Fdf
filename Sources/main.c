/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 16:56:33 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/03 17:46:17 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

int		main(int argc, char **argv)
{
	int			fd;
	t_array		*array;
	int			x;
	int			y;


	if (argc == 2)
	{
		array = NULL;
		if((fd = open(argv[1], O_RDONLY)) == -1)
			return (0);
		if(!(ft_create_array(array, fd)))
			return (0);
		y = 0;
		while (y < array->y)
		{
			x = 0;
			while (x < *array->nb_x_line[x])
			{
			ft_putnbr(array->tab[y][x]);
			x++;
			}
		}
	}
	else
		ft_putstr("erreur");
	return (0);
}
