# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/10 13:02:38 by jjaroens          #+#    #+#              #
#    Updated: 2025/06/20 18:24:05 by jjaroens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = aform

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp 

HEADER = Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp \
		RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

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
