CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Karen.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = karenFilter

.PHONY: all clean fclean re test

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

test: $(TARGET)
	@echo "Testing karenFilter..."
	@echo "Testing with input 'WARNING':"
	@./karenFilter "WARNING"
	@echo
	@echo "Testing with input 'I am not sure how tired I am today...':"
	@./karenFilter "I am not sure how tired I am today..."
	@echo "End of tests."
