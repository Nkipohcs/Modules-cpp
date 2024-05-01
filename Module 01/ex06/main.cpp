#include "Harl.hpp"
#include <string>

int main(int argc, char **argv) {
    Harl harl;

    if (argc == 2) {
        std::string level = argv[1];
        harl.complain(level);
    } else {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}
