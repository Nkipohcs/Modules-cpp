/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 23:05:27 by nschwob           #+#    #+#             */
/*   Updated: 2024/02/11 23:50:41 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    Bureaucrat bureaucrat("Jean Valjean", 5);
    ShrubberyCreationForm shrubberyForm("home");
    RobotomyRequestForm robotomyForm("R2D2");
    PresidentialPardonForm pardonForm("Chewbacca");

    bureaucrat.signForm(shrubberyForm);
    bureaucrat.executeForm(shrubberyForm);

    bureaucrat.signForm(robotomyForm);
    bureaucrat.executeForm(robotomyForm);

    bureaucrat.signForm(pardonForm);
    bureaucrat.executeForm(pardonForm);

    return 0;
}
