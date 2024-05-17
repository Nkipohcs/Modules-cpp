#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) 
: AForm("RobotomyRequestForm", 72, 45), target(target) {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned() || executor.getGrade() > get
