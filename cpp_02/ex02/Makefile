# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 15:53:04 by bchedru           #+#    #+#              #
#    Updated: 2025/06/11 18:47:35 by bchedru          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

FILES = Fixed main

OBJ_DIR = obj/

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILES)))

all: $(NAME)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re: fclean all

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CPP) -o $@ $(OBJS) $(CFLAGS)

$(OBJ_DIR):
	mkdir $@

obj/%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re