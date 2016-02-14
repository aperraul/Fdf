/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_tab_pts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 18:08:20 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/14 18:11:01 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Libdraw.h"

t_3Dpt	**ft_del_tab_pts(t_3Dpt **tab)
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
