/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:52:37 by nschwob           #+#    #+#             */
/*   Updated: 2024/02/10 23:19:37 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp" // Include Form.hpp to access the Form class and its member functions

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade < 1) throw GradeTooHighException();
    if (grade > 150) throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const { return name; }

int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::incrementGrade() {
    if (grade <= 1) throw GradeTooHighException();
    --grade;
}

void Bureaucrat::decrementGrade() {
    if (grade >= 150) throw GradeTooLowException();
    ++grade;
}

void Bureaucrat::signForm(Form& form) {
    if (grade <= form.getGradeRequiredToSign()) {
        form.beSigned(*this);
    } else {
        throw GradeTooLowException();
    }
}

const char* Bureaucrat::GradeTooHighException::what() const noexcept { return "Grade too high"; }

const char* Bureaucrat::GradeTooLowException::what() const noexcept { return "Grade too low"; }

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
