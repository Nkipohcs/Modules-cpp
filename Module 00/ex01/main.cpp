#include "PhoneBook.hpp"
#include <limits>
#include <iostream>
#include <string>

bool getInput(std::string& input) {
    std::getline(std::cin, input);
    if (std::cin.eof()) {
        return false; // EOF détecté
    }
    return true;
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!getInput(command)) {
            break; // Quitte le programme si EOF (Ctrl+D) est détecté
        }

        if (command == "EXIT") {
            break;
        } else if (command == "ADD") {
            Contact contact;
            std::string input;

            std::cout << "Enter first name: ";
            if (!getInput(input)) break;
            contact.setFirstName(input);

            std::cout << "Enter last name: ";
            if (!getInput(input)) break;
            contact.setLastName(input);

            std::cout << "Enter nickname: ";
            if (!getInput(input)) break;
            contact.setNickname(input);

            std::cout << "Enter phone number: ";
            if (!getInput(input)) break;
            contact.setPhoneNumber(input);

            std::cout << "Enter darkest secret: ";
            if (!getInput(input)) break;
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

            if (std::cin.fail()) {
                std::cin.clear(); // Efface l'état d'échec de cin
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore le reste de la ligne
                std::cout << "Invalid input. Please enter a number." << std::endl;
            } else if (index >= 0 && index < phoneBook.getCurrentContactCount()) {
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
