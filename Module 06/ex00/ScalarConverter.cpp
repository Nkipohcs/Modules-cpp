#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <limits>
#include <cctype>
#include <cmath>

void ScalarConverter::convert(const std::string& literal) {
    std::istringstream iss(literal);
    long double value = 0;
    if (literal == "nan") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }
    iss >> value;
    if (iss.fail() && literal != "nanf") {
        std::cout << "Error: Invalid input" << std::endl;
        return;
    }

    // Char conversion
    if (std::isprint(static_cast<int>(value)) && value != 0) {
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    } else if (value == 0) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: impossible" << std::endl;
    }

    // Int conversion
    if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max()) {
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    } else {
        std::cout << "int: impossible" << std::endl;
    }

    // Float and double conversions with .0 for whole numbers
    std::cout << "float: " << static_cast<float>(value) << (value == static_cast<int>(value) ? ".0f" : "f") << std::endl;
    std::cout << "double: " << static_cast<double>(value) << (value == static_cast<int>(value) ? ".0" : "") << std::endl;
}
