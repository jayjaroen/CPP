# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/17 21:58:44 by jjaroens          #+#    #+#              #
#    Updated: 2025/03/21 23:01:35 by jjaroens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstract

SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

HEADER = AAnimal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

CC = c++ -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj/

OBJ = $(SRC:%.cpp=$(OBJ_DIR)%.o)
# OBJ_FILES = $(SRC:.cpp=.o)

# OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))
all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
		$(CC) $(OBJ) -o $(NAME) 

$(OBJ_DIR)%.o: %.cpp $(HEADER) Makefile
		@mkdir -p $(OBJ_DIR)
		$(CC) -I. -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
