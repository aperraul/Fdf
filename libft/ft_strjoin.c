/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:52:17 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/01 18:58:37 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		cpt1;
	int		cpt2;

	if (s1 && s2)
	{
		str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (str == NULL)
			return (NULL);
		cpt1 = 0;
		while (s1[cpt1])
		{
			str[cpt1] = s1[cpt1];
			cpt1++;
		}
		cpt2 = 0;
		while (s2[cpt2])
		{
			str[cpt1] = s2[cpt2];
			cpt1++;
			cpt2++;
		}
		return (str);
	}
	return (0);
}
