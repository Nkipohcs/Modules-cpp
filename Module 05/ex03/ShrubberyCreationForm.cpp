#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
: AForm("ShrubberyCreationForm", 145, 137), target(target) {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!getIsSigned() || executor.getGrade() > getGradeRequiredToExecute()) {
        throw AForm::GradeTooLowException();
    }
    std::ofstream ofs((this->target + "_shrubbery").c_str());
    if (ofs) {
        ofs << "ASCII trees" << std::endl;
    }
    ofs.close();
}
