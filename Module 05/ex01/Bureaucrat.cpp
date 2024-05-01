/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:52:37 by nschwob           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/05/01 21:13:19 by nschwob          ###   ########.fr       */
=======
/*   Updated: 2024/02/10 23:19:37 by nschwob          ###   ########.fr       */
>>>>>>> origin/main
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
<<<<<<< HEAD
#include "Form.hpp"
=======
#include "Form.hpp" // Include Form.hpp to access the Form class and its member functions
>>>>>>> origin/main

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

<<<<<<< HEAD
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low";
}
=======
const char* Bureaucrat::GradeTooHighException::what() const noexcept { return "Grade too high"; }

const char* Bureaucrat::GradeTooLowException::what() const noexcept { return "Grade too low"; }
>>>>>>> origin/main

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
<<<<<<< HEAD

=======
>>>>>>> origin/main
