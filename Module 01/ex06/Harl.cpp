#include "Harl.hpp"
#include <algorithm>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!\n" << std::endl;
}

void Harl::info() {
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error() {
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int index = std::distance(levels, std::find(levels, levels + 4, level));
    switch (index) {
        case 0:
            (this->*functions[0])(); // Debug
            // fall through
        case 1:
            (this->*functions[1])(); // Info
            // fall through
        case 2:
            (this->*functions[2])(); // Warning
            // fall through
        case 3:
            (this->*functions[3])(); // Error
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}