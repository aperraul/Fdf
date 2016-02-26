/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:55:55 by aperraul          #+#    #+#             */
/*   Updated: 2015/11/29 15:23:03 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*chr;

	chr = (char *)malloc(sizeof(char) * (size + 1));
	if (chr == NULL)
		return (NULL);
	chr[size] = '\0';
	while (size > 0)
	{
		size--;
		chr[size] = '\0';
	}
	return (chr);
}
