/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_event.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 12:23:37 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/13 16:53:27 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/header.h"

int		ft_fdf_event(int keycode, t_fdf *fdf)
{
	if (keycode == 53)
		ft_fdf_exit(fdf);
	fdf->key = keycode;
	ft_putnbr(fdf->array->tab_pt[3][2].z); //
	ft_fdf(fdf);
	return (0);
}
