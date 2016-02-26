/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:24:05 by aperraul          #+#    #+#             */
/*   Updated: 2015/11/25 04:29:13 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int cpt1;
	int cpt2;

	cpt1 = 0;
	cpt2 = 0;
	while (dest[cpt1] != '\0')
		cpt1++;
	while (src[cpt2] != '\0')
	{
		dest[cpt1] = src[cpt2];
		cpt1++;
		cpt2++;
	}
	dest[cpt1] = '\0';
	return (dest);
}
