/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 12:14:57 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/08 12:42:37 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

t_pt		ft_apply_matrix(t_3Dpt pt, t_matrix m)
{
	t_pt	p;

	p.x = (pt.x * m.x.x) + (pt.y * m.x.y) + (pt.z * m.x.z);
	p.y = (pt.x * m.y.x) + (pt.y * m.y.y) + (pt.z * m.y.z);
	return (p);
}
