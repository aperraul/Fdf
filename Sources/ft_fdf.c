/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 15:05:27 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/06 15:34:33 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

void	ft_fdf(t_fdf *fdf)
{
	t_matrix_rot	rot;

	rot.mx = ft_make_matrix_x(fdf->rad.x);
	rot.my = ft_make_matrix_y(fdf->rad.y);
	rot.mz = ft_make_matrix_z(fdf->rad.z);
	rot.m = ft_multiply_matrix(ft_multiply_matrix(rot.mx, rot.my), rot.mz);
}
