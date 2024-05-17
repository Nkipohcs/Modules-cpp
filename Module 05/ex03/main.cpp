#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 1);
        Bureaucrat alice("Alice", 150);
        ShrubberyCreationForm shrubbery("home");
        RobotomyRequestForm robotomy("Bender");
        PresidentialPardonForm pardon("Fry");

        std::cout << bob << std::endl;
        std::cout << alice << std::endl;

        bob.signForm(shrubbery);
        bob.executeForm(shrubbery);

        bob.signForm(robotomy);
        bob.executeForm(robotomy);

        bob.signForm(pardon);
        bob.executeForm(pardon);

        alice.signForm(shrubbery);
        alice.executeForm(shrubbery);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
