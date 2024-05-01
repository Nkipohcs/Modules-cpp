#include "iter.hpp"
#include <iostream>

template <typename T>
void printElement(T const &element) {
    std::cout << element << std::endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    std::string strArray[] = {"one", "two", "three", "four", "five"};

    iter(intArray, 5, printElement);
    iter(strArray, 5, printElement);

    return 0;
}
