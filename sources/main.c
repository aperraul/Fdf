/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 16:56:33 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/16 15:46:41 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

int		main(int argc, char **argv)
{
	int			fd;
	t_array		*array;

	if (argc == 2)
	{
		array = NULL;
		if ((fd = open(argv[1], O_RDONLY)) == -1)
		{
			ft_putstr("error 404 file not found");
			return (0);
		}
		if (!(array = ft_alloc_array(array)))
			return (0);
		if (!(array = ft_create_array(array, fd)))
		{
			close(fd);
			ft_putstr("bad file");
			return (0);
		}
		close(fd);
		ft_pre_fdf(array);
	}
	ft_putstr("erreur: nb arguments != 1");
	return (0);
}
