# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperraul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/08 16:10:30 by aperraul          #+#    #+#              #
#    Updated: 2016/03/16 15:18:25 by aperraul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = ./sources/main.c \
	  ./sources/alloc_fdf.c \
	  ./sources/create_array.c \
	  ./sources/del_fdf.c \
	  ./sources/fdf_event.c \
	  ./sources/ft_check_line.c \
	  ./sources/ft_fdf.c \
	  ./sources/ft_fdf_add_pos.c \
	  ./sources/ft_fdf_add_scale.c \
	  ./sources/ft_fdf_draw.c \
	  ./sources/ft_fdf_exit.c \
	  ./sources/ft_fdf_init.c \
	  ./sources/ft_fill_end_tab.c \
	  ./sources/ft_new_tab.c \
	  ./sources/ft_new_tab_pt.c \
	  ./sources/ft_rad_mod.c \
	  ./sources/ft_pos_mod.c \
	  ./sources/ft_scale_mod.c \
	  ./sources/pre_fdf.c \
	  ./sources/reset_tab.c \
	  ./gnl/get_next_line.c

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
	   ./ft_rad_mod.o \
	   ./ft_pos_mod.o \
	   ./ft_scale_mod.o \
	   ./pre_fdf.o \
	   ./reset_tab.o \
	   ./get_next_line.o

DRAW = ./Libdraw/draw.a

LIBFT = ./libft/libft.a

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
	make -C ./libft/

$(LIBMLX):
	make -C ./libmlx/

$(DRAW):
	make -C ./Libdraw/

clean:
	$(RM) $(OBJS)
#	make clean -C ./libft/
#	make clean -C ./libmlx/
#	make clean -C ./Libdraw/

fclean: clean
	$(RM) $(NAME) $(LIBFT) $(LIBMLX) $(DRAW)

re: fclean all
