# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 22:53:13 by nschwob           #+#    #+#              #
#    Updated: 2024/02/10 22:53:14 by nschwob          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=g++
CXXFLAGS=-Wall -Wextra -Werror
NAME=Bureaucrat
SRC=Bureaucrat.cpp Form.cpp main.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

