/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf_exit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 16:06:30 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/12 16:45:34 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

void	ft_fdf_exit(t_fdf *fdf)
{
	ft_del_array(fdf->array);
	ft_clear_mlx(fdf->mlx);
	ft_memdel((void **)&fdf);
	exit(0);
}
