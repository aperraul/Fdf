/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_tab_pts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 18:08:20 by aperraul          #+#    #+#             */
/*   Updated: 2016/03/12 16:37:39 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/libdraw.h"

t_3dpt	**ft_del_tab_pts(t_3dpt **tab)
{
	int		i;

	if (!tab)
		return (NULL);
	i = -1;
	while (tab[++i])
		ft_memdel((void **)&tab[i]);
	ft_memdel((void **)tab);
	return (tab);
}
