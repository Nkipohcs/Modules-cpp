/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:53:10 by nschwob           #+#    #+#             */
/*   Updated: 2024/02/10 22:57:45 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    Bureaucrat john("John Doe", 50);
    Bureaucrat jane("Jane Doe", 150);
    Form taxForm("Tax Form", 100, 50);
    Form secretForm("Secret Form", 25, 5);

    std::cout << john << std::endl;
    std::cout << jane << std::endl;
    std::cout << taxForm << std::endl;
    std::cout << secretForm << std::endl;

    try {
        john.signForm(taxForm);
        jane.signForm(taxForm);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        john.signForm(secretForm);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << taxForm << std::endl;
    std::cout << secretForm << std::endl;

    return 0;
}
