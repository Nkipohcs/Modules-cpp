#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade < 1) throw GradeTooHighException();
    if (grade > 150) throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : name(src.name), grade(src.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    if (this != &rhs) {
        this->grade = rhs.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade() {
    if (grade <= 1) throw GradeTooHighException();
    --grade;
}

void Bureaucrat::decrementGrade() {
    if (grade >= 150) throw GradeTooLowException();
    ++grade;
}

void Bureaucrat::signForm(AForm& form) {
    try {
        form.beSigned(*this);
        std::cout << name << " signs " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) {
    try {
        form.execute(*this);
        std::cout << name << " executes " << form.getName() << std::endl;
    } catch (std::exception& e) {
        std::cout << name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
}
