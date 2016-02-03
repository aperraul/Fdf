/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:03:10 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/03 13:13:13 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "get_next_line.h"
# include "../Libft/libft.h"
# include "mlx.h"
# include "Libdraw.h"

typedef struct			s_array
{
	char				**str;
	int					x;
	int					y;
	int					z;
	int					**tab;
}						t_array;

typedef struct			s_lstline
{
	struct	s_lstline	*next;
	char				*line;
}						t_lstline;

t_array					*ft_create_array(t_array *array, int fd);

#endif
