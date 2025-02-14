# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/13 17:08:15 by jjaroens          #+#    #+#              #
#    Updated: 2025/02/14 22:02:51 by jjaroens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnessaryViolence

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

CC = c++ -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj/

OBJ_FILES = $(SRC:.cpp=.o)

OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))


all: $(NAME)

# $(NAME): $(OBJ) $(HEADER)
# 		$(CC) $(OBJ) -o $(NAME) 
# Mac
$(NAME): $(OBJ) $(HEADER)
		$(CC) -fsanitize=address -g $(OBJ) -o $(NAME) 

$(OBJ_DIR)%.o: %.cpp $(HEADER) Makefile
		@mkdir -p $(OBJ_DIR)
		$(CC) -I. -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re