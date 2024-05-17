#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute) 
    : name(name), isSigned(false), gradeRequiredToSign(gradeToSign), gradeRequiredToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150) throw GradeTooLowException();
}

AForm::~AForm() {}

const std::string& AForm::getName() const { return name; }
bool AForm::getIsSigned() const { return isSigned; }
int AForm::getGradeRequiredToSign() const { return gradeRequiredToSign; }
int AForm::getGradeRequiredToExecute() const { return gradeRequiredToExecute; }

void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > gradeRequiredToSign) throw GradeTooLowException();
    isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw() { return "Form grade too high"; }
const char* AForm::GradeTooLowException::what() const throw() { return "Form grade too low"; }

std::ostream& operator<<(std::ostream& out, const AForm& form) {
    out << form.getName() << ", form signed: " << (form.getIsSigned() ? "yes" : "no")
        << ", grade required to sign: " << form.getGradeRequiredToSign()
        << ", grade required to execute: " << form.getGradeRequiredToExecute();
    return out;
}
