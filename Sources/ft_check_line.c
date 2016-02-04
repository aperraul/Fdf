/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 17:18:01 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/04 17:44:07 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Header.h"

int		ft_check_line(char *line)
{
	int		i;

	i = 0;
	while (line[i])
	{
		if ((line[i] >= '0' && line[i] <= '9') || (line[i] >= 'a' &&
				line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')
				|| line[i] == ' ')
			i++;
		else
			return (0);
	}
	return (1);
}
