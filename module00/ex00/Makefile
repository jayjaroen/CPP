# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/22 12:16:48 by jjaroens          #+#    #+#              #
#    Updated: 2025/02/13 12:07:15 by jjaroens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

CC = c++ -Wall -Wextra -Werror -std=c++98 ##debug

OBJ_DIR = obj/

OBJ_FILES = $(SRC:.cpp=.o)

OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o: %.cpp Makefile
		@mkdir -p $(OBJ_DIR)
		$(CC) -I. -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# NAME = megaphone

# SRC = megaphone.cpp

# CC = c++ -Wall -Wextra -Werror -std=c++98

# all: $(NAME)

# $(NAME): $(SRC)
# 	$(CC) $(SRC) -o $(NAME)

# clean:
# 	rm -rf $(NAME)

# fclean: clean

# re: fclean all

# .PHONY: all clean fclean re