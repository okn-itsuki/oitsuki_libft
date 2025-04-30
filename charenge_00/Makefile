# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 05:02:44 by oitsuki           #+#    #+#              #
#    Updated: 2025/04/29 22:13:35 by oitsuki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC		:= cc
RM		:= rm -f
INC		:= libft.h
SRCS	:= $(wildcard ft_*.c)
OBJS	:= $(SRCS:.c=.o)
CFLAGS	:= -Wall -Wextra -Werror

$(NAME) : $(OBJS)
	ar rcs $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c  $< -o $@

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean
