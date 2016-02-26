/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:15:36 by aperraul          #+#    #+#             */
/*   Updated: 2015/11/29 15:22:02 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		cpt;
	char	*buff;

	cpt = 0;
	while (src[cpt] != '\0')
		cpt++;
	buff = (char*)malloc(sizeof(*src) * cpt);
	if (buff == 0)
		return (NULL);
	cpt = 0;
	while (src[cpt] != '\0')
	{
		buff[cpt] = src[cpt];
		cpt++;
	}
	buff[cpt] = '\0';
	return (buff);
}
