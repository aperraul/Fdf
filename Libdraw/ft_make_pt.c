/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_pt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 15:54:07 by aperraul          #+#    #+#             */
/*   Updated: 2016/01/27 13:04:52 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

t_pt	ft_make_pt(int x, int y)
{
	t_pt	pt;

	pt.x = x;
	pt.y = y;
	return (pt);
}
