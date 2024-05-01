/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:53:00 by nschwob           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/05/01 21:10:22 by nschwob          ###   ########.fr       */
=======
/*   Updated: 2024/02/10 22:56:40 by nschwob          ###   ########.fr       */
>>>>>>> origin/main
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <ostream>
#include <stdexcept>

class Form {
private:
    const std::string name;
    bool isSigned;
    const int gradeRequiredToSign;
    const int gradeRequiredToExecute;

public:
    Form(const std::string &name, int gradeRequiredToSign, int gradeRequiredToExecute);
    virtual ~Form();

    const std::string& getName() const;
    bool getIsSigned() const;
    int getGradeRequiredToSign() const;
    int getGradeRequiredToExecute() const;

    void beSigned(const Bureaucrat& bureaucrat);

    class GradeTooHighException : public std::exception {
    public:
<<<<<<< HEAD
        virtual const char* what() const throw();
=======
        const char* what() const noexcept override;
>>>>>>> origin/main
    };

    class GradeTooLowException : public std::exception {
    public:
<<<<<<< HEAD
        virtual const char* what() const throw();
=======
        const char* what() const noexcept override;
>>>>>>> origin/main
    };
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif // FORM_HPP
