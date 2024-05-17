#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) 
: AForm("PresidentialPardonForm", 25, 5), target(target) {}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned() || executor.getGrade() > getGradeRequiredToExecute()) {
        throw AForm::GradeTooLowException();
    }
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
