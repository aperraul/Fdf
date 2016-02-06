/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 12:32:09 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/06 12:47:39 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

t_matrix	ft_init_matrix(t_pt pos)
{
	t_matrix	m;

	m.x = ft_make_vector(0.0f, 0.0f, 0.0f);
	m.y = ft_make_vector(0.0f, 0.0f, 0.0f);
	m.z = ft_make_vector(0.0f, 0.0f, 0.0f);
	m.pos = pos;
	return (m);
}
