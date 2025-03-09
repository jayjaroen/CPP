# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/09 16:29:55 by jjaroens          #+#    #+#              #
#    Updated: 2025/03/09 16:43:16 by jjaroens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Clap_Trap

SRC = main.cpp ClapTrap.cpp

HEADER = ClapTrap.hpp

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