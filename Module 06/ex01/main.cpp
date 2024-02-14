#include "Serializer.hpp"
#include <iostream>

int main() {
    Data data;
    data.value = 42;

    uintptr_t raw = Serializer::serialize(&data);
    Data* ptr = Serializer::deserialize(raw);

    if (ptr == &data) {
        std::cout << "Serialization and deserialization successful." << std::endl;
        std::cout << "Data value: " << ptr->value << std::endl;
    } else {
        std::cout << "Error in serialization/deserialization process." << std::endl;
    }

    return 0;
}
