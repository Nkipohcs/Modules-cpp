/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:45:32 by nschwob           #+#    #+#             */
/*   Updated: 2023/10/01 11:45:33 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "EXIT") {
            break;
        } else if (command == "ADD") {
            Contact contact;
            std::string input;

            std::cout << "Enter first name: ";
            std::cin >> input;
            contact.setFirstName(input);

            std::cout << "Enter last name: ";
            std::cin >> input;
            contact.setLastName(input);

            std::cout << "Enter nickname: ";
            std::cin >> input;
            contact.setNickname(input);

            std::cout << "Enter phone number: ";
            std::cin >> input;
            contact.setPhoneNumber(input);

            std::cout << "Enter darkest secret: ";
            std::cin >> input;
            contact.setDarkestSecret(input);

            phoneBook.addContact(contact);
        } else if (command == "SEARCH") {
            for (int i = 0; i < phoneBook.getCurrentContactCount(); i++) {
                Contact contact = phoneBook.getContact(i);
                std::cout << i << " | " << contact.truncateOrFill(contact.getFirstName()) << " | " << contact.truncateOrFill(contact.getLastName()) << " | " << contact.truncateOrFill(contact.getNickname()) << std::endl;
            }

            int index;
            std::cout << "Enter index of contact to view: ";
            std::cin >> index;

            if (index >= 0 && index < phoneBook.getCurrentContactCount()) {
                Contact contact = phoneBook.getContact(index);
                std::cout << "First Name: " << contact.getFirstName() << std::endl;
                std::cout << "Last Name: " << contact.getLastName() << std::endl;
                std::cout << "Nickname: " << contact.getNickname() << std::endl;
                std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
                std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
            } else {
                std::cout << "Invalid index." << std::endl;
            }
        }
    }

    return 0;
}
