/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:35:29 by nschwob           #+#    #+#             */
/*   Updated: 2024/02/10 22:47:03 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

#include "Bureaucrat.hpp"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> testGrades = {1, 150, 75, 0, 151, 149, 2, 100, -50, 200};

    for (int grade : testGrades) {
        try {
            Bureaucrat bureaucrat("Test Bureaucrat", grade);
            std::cout << bureaucrat.getName() << " successfully created with grade " << bureaucrat.getGrade() << std::endl;
        } catch (std::exception& e) {
            std::cout << "Failed to create Bureaucrat with grade " << grade << ": " << e.what() << std::endl;
        }
    }

    return 0;
}
