# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperraul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/27 15:26:56 by aperraul          #+#    #+#              #
#    Updated: 2016/02/05 12:14:34 by aperraul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = draw.a

SRCS = draw_line.c \
	   draw_pixel.c \
	   ft_make_3Dpt.c \
	   ft_make_line.c \
	   ft_make_pt.c \
	   mlx_init.c \
	   new_image.c \
	   draw_flush_img.c

OBJS = draw_line.o \
	   draw_pixel.o \
	   ft_make_3Dpt.o \
	   ft_make_line.o \
	   ft_make_pt.o \
	   mlx_init.o \
	   new_image.o \
	   draw_flush_img.o

FLAGS = -Wall -Wextra -Werror

CC = gcc

RM = rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS) :
	$(CC) $(FLAGS) -c $(SRCS)

clean :
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME) $(LIBFT) $(LIBMLX)

re: fclean all
