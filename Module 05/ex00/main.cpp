/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:35:29 by nschwob           #+#    #+#             */
/*   Updated: 2024/05/01 21:07:42 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> testGrades;
    testGrades.push_back(1);
    testGrades.push_back(150);
    testGrades.push_back(75);
    testGrades.push_back(0);
    testGrades.push_back(151);
    testGrades.push_back(149);
    testGrades.push_back(2);
    testGrades.push_back(100);
    testGrades.push_back(-50);
    testGrades.push_back(200);

    for (size_t i = 0; i < testGrades.size(); ++i) {
        int grade = testGrades[i];
        try {
            Bureaucrat bureaucrat("Test Bureaucrat", grade);
            std::cout << bureaucrat.getName() << " successfully created with grade " << bureaucrat.getGrade() << std::endl;
        } catch (std::exception& e) {
            std::cout << "Failed to create Bureaucrat with grade " << grade << ": " << e.what() << std::endl;
        }
    }

    return 0;
}
