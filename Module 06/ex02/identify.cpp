#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <typeinfo>

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) std::cout << "A\n";
    else if (dynamic_cast<B*>(p)) std::cout << "B\n";
    else if (dynamic_cast<C*>(p)) std::cout << "C\n";
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p); std::cout << "A\n";
    } catch (std::bad_cast&) {
        try {
            (void)dynamic_cast<B&>(p); std::cout << "B\n";
        } catch (std::bad_cast&) {
            std::cout << "C\n";
        }
    }
}
