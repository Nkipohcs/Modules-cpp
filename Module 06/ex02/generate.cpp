#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base *generate(void) {
    srand(time(0));
    switch (rand() % 3) {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
    }
    return NULL;
}
