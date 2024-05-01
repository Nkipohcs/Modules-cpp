/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:52:40 by nschwob           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/05/01 21:10:07 by nschwob          ###   ########.fr       */
=======
/*   Updated: 2024/02/10 23:02:23 by nschwob          ###   ########.fr       */
>>>>>>> origin/main
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <ostream>
#include <stdexcept>

<<<<<<< HEAD
class Form;
=======
class Form; // Forward declaration
>>>>>>> origin/main

class Bureaucrat {
private:
    const std::string name;
    int grade;

public:
    Bureaucrat(const std::string& name, int grade);
    ~Bureaucrat();

    const std::string& getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
<<<<<<< HEAD
    void signForm(Form& form);

    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
=======
    void signForm(Form& form); // Declaration of the signForm function

    class GradeTooHighException : public std::exception {
    public:
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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif // BUREAUCRAT_HPP
