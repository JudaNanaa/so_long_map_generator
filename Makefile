# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/17 12:57:50 by madamou           #+#    #+#              #
#    Updated: 2024/06/23 17:31:48 by madamou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

C_FLAGS = -Wall -Wextra -Werror -g3

SRCS_DIR = srcs/

SRCS = main.c create_map.c place_sprite.c check_if_playable.c place_wall.c

OBJS_DIR = .objets/

SRCS := $(SRCS:%=$(SRCS_DIR)/%)

OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)

DIR_DUP = mkdir -p $(@D)

NAME = so_long_generator

LIBFT = libft.a

all : $(LIBFT) $(NAME)

$(LIBFT) :
	make -C ./libft 

$(NAME) : $(OBJS)
	$(CC) $(C_FLAGS) $^ -L ./libft -lft -o $@

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c
	$(DIR_DUP)
	$(CC) $(C_FLAGS) -c $< -o $@

clean : 
	make clean -C ./libft 
	rm -rf $(OBJS_DIR)

fclean : clean
	make fclean -C ./libft 
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re 
