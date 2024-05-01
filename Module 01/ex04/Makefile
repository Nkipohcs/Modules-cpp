NAME = sed_is_for_losers

SRC = main.cpp FileReplacer.cpp
OBJ = $(SRC:.cpp=.o)

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	echo "Creating test files..."
	echo "Hello world" > testfile1.txt
	echo "foo bar foo bar" > testfile2.txt
	echo "Case Test case TeSt" > testfile3.txt
	echo "line one" > testfile4.txt
	echo "line two" >> testfile4.txt
	echo "line three" >> testfile4.txt
	touch testfile5.txt

	echo "\nRunning tests..."
	./sed_is_for_losers testfile1.txt world 42
	./sed_is_for_losers testfile2.txt foo baz
	./sed_is_for_losers testfile3.txt Test example
	./sed_is_for_losers testfile4.txt line text
	./sed_is_for_losers testfile5.txt foo bar

	echo "\nTest Results:"
	echo "1. Basic Test:"
	cat testfile1.txt.replace
	echo "\n2. Multiple Occurrences:"
	cat testfile2.txt.replace
	echo "\n3. Case Sensitivity:"
	cat testfile3.txt.replace
	echo "\n4. Multiple Lines:"
	cat testfile4.txt.replace
	echo "\n5. Empty File:"
	cat testfile5.txt.replace

	echo "\nCleaning up..."
	rm -f testfile*.txt testfile*.txt.replace

.PHONY: all clean fclean re
