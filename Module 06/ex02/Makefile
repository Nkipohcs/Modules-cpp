CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = polymorphism
SRC = main.cpp generate.cpp identify.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
