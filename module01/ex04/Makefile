# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 14:59:23 by jjaroens          #+#    #+#              #
#    Updated: 2025/02/18 22:21:38 by jjaroens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

SRC = main.cpp

CC = c++ -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj/

OBJ_FILES = $(SRC:.cpp=.o)

OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME) 
# Mac
# $(NAME): $(OBJ) $(HEADER)
# 		$(CC) -fsanitize=address -g $(OBJ) -o $(NAME) 

$(OBJ_DIR)%.o: %.cpp Makefile
		@mkdir -p $(OBJ_DIR)
		$(CC) -I. -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re