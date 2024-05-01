/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:52:58 by nschwob           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/05/01 21:14:48 by nschwob          ###   ########.fr       */
=======
/*   Updated: 2024/02/10 23:20:15 by nschwob          ###   ########.fr       */
>>>>>>> origin/main
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int gradeRequiredToSign, int gradeRequiredToExecute)
    : name(name), isSigned(false), gradeRequiredToSign(gradeRequiredToSign), gradeRequiredToExecute(gradeRequiredToExecute) {
    if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1) throw GradeTooHighException();
    if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150) throw GradeTooLowException();
}

Form::~Form() {}

const std::string& Form::getName() const { return name; }

bool Form::getIsSigned() const { return isSigned; }

int Form::getGradeRequiredToSign() const { return gradeRequiredToSign; }

int Form::getGradeRequiredToExecute() const { return gradeRequiredToExecute; }

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > gradeRequiredToSign) throw GradeTooLowException();
    isSigned = true;
}

<<<<<<< HEAD
const char* Form::GradeTooHighException::what() const throw() {
    return "Form grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form grade too low";
}
=======
const char* Form::GradeTooHighException::what() const noexcept { return "Form grade too high"; }

const char* Form::GradeTooLowException::what() const noexcept { return "Form grade too low"; }
>>>>>>> origin/main

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form: " << form.getName() << ", isSigned: " << (form.getIsSigned() ? "true" : "false")
       << ", gradeRequiredToSign: " << form.getGradeRequiredToSign()
       << ", gradeRequiredToExecute: " << form.getGradeRequiredToExecute();
    return os;
}
