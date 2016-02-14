# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperraul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/08 16:10:30 by aperraul          #+#    #+#              #
#    Updated: 2016/02/14 17:55:08 by aperraul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = ./sources/main.c \
	  ./Sources/alloc_fdf.c \
	  ./Sources/create_array.c \
	  ./Sources/del_fdf.c \
	  ./Sources/fdf_event.c \
	  ./Sources/ft_check_line.c \
	  ./Sources/ft_fdf.c \
	  ./Sources/ft_fdf_add_pos.c \
	  ./Sources/ft_fdf_add_scale.c \
	  ./Sources/ft_fdf_draw.c \
	  ./Sources/ft_fdf_exit.c \
	  ./Sources/ft_fdf_init.c \
	  ./Sources/ft_fill_end_tab.c \
	  ./Sources/ft_new_tab.c \
	  ./Sources/ft_new_tab_pt.c \
	  ./GNL/get_next_line.c \

OBJS = ./main.o \
	   ./alloc_fdf.o \
	   ./create_array.o \
	   ./del_fdf.o \
	   ./fdf_event.o \
	   ./ft_check_line.o \
	   ./ft_fdf.o \
	   ./ft_fdf_add_pos.o \
	   ./ft_fdf_add_scale.o \
	   ./ft_fdf_draw.o \
	   ./ft_fdf_exit.o \
	   ./ft_fdf_init.o \
	   ./ft_fill_end_tab.o \
	   ./ft_new_tab.o \
	   ./ft_new_tab_pt.o \
	   ./get_next_line.o

DRAW = ./Libdraw/draw.a

LIBFT = ./Libft/libft.a

LIBMLX = ./libmlx/libmlx.a

LMLX = -lmlx

FRAMEWORK = $(LMLX) -framework OpenGL -framework AppKit

FLAGS = -Wall -Wextra -Werror -fsanitize=address

CC = gcc

RM = rm -f

all: $(NAME)

$(NAME): $(LIBFT) $(LIBMLX) $(DRAW) $(OBJS)
	$(CC) $(FLAGS) $(FRAMEWORK) $(OBJS) $(LIBFT) $(LIBMLX) $(DRAW) -o $(NAME)

$(OBJS): $(LIBFT) $(LIBMLX) $(DRAW)
	$(CC) $(FLAGS) -c $(SRC)

$(LIBFT):
	make -C ./Libft/

$(LIBMLX):
	make -C ./Libmlx/

$(DRAW):
	make -C ./Libdraw/

clean:
	$(RM) $(OBJS)
	make clean -C ./Libft/
	make clean -C ./libmlx/
	make clean -C ./Libdraw/

fclean: clean
	$(RM) $(NAME) $(LIBFT) $(LIBMLX) $(DRAW)

re: fclean all
