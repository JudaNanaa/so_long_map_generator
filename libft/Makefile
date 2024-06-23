# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/23 16:07:55 by madamou           #+#    #+#              #
#    Updated: 2024/06/20 15:06:32 by madamou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 

OBJS_DIR = .objets/

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
       ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c \
       ft_putendl.c ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c ft_putstr.c \
       ft_split.c ft_strchr.c ft_strclr.c ft_strcpy.c ft_strdup.c ft_striteri.c \
       ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
       ft_strncpy.c ft_strnew.c ft_strrchr.c ft_strstr.c ft_strtrim.c \
       ft_substr.c ft_tolower.c ft_toupper.c ft_strmapi.c ft_strnstr.c \
       ft_strcmp.c ft_strcat.c ft_realloc.c get_next_line_bonus.c get_next_line_utils_bonus.c \
       ft_printf.c ft_itoa_printf.c functions.c functions2.c functions3.c \
	functions4.c printf_utils.c check_functions.c ft_split_utils.c ft_free_split.c

SRCS := $(SRCS:%=./%)

OBJS = $(SRCS:./%.c=$(OBJS_DIR)/%.o)

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c \
              ft_lstadd_back_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
              ft_lstclear_bonus.c ft_lstdelone_bonus.c

SRCS_BONUS := $(SRCS_BONUS:%=./%)

OBJS_BONUS = $(SRCS_BONUS:./%.c=$(OBJS_DIR)/%.o)

DIR_DUP = mkdir -p $(@D)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS_DIR)/%.o : %.c
	@$(DIR_DUP)
	$(CC) $(CFLAGS) -c -include ./libft.h $< -o $@

bonus: all $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS_BONUS)

%.o : %.c
	$(CC) $(CFLAGS) -c -include ./libft.h $< -o $@

clean:
	rm -rf $(OBJS_DIR) 
                                                                             
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
