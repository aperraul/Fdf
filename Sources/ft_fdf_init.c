/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 12:48:01 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/08 17:18:58 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

t_fdf	*ft_init_fdf(t_mlx *mlx, t_array *array)
{
	t_fdf	*fdf;

	fdf = (t_fdf *)ft_memalloc(sizeof(t_fdf));
	fdf->array = array;
	fdf->mlx = mlx;
	fdf->key = -1;
	fdf->rad = ft_make_vector(3.141f, 3.141f, 0.0f);
	fdf->pos = ft_make_pt(400, 400);
	fdf->scale = ft_make_3Dpt(10, 10, 2);
	return (fdf);
}
