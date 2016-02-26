/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:28:18 by aperraul          #+#    #+#             */
/*   Updated: 2015/11/25 19:05:34 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	cpt;

	cpt = 0;
	while (src[cpt] != '\0')
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	dest[cpt] = '\0';
	return (dest);
}
