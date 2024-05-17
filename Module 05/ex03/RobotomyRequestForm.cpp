#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) 
: AForm("RobotomyRequestForm", 72, 45), target(target) {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned() || executor.getGrade() > getGradeRequiredToExecute()) {
        throw AForm::GradeTooLowException();
    }
    std::cout << "Drilling noises... ";
    if (rand() % 2 == 0) {
        std::cout << target << " has been robotomized successfully." << std::endl;
    } else {
        std::cout << "Robotomy failed on " << target << "." << std::endl;
    }
}
