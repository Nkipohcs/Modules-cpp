/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:45:28 by nschwob           #+#    #+#             */
/*   Updated: 2023/10/01 11:45:29 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentContactIndex(0) {}

void PhoneBook::addContact(const Contact &contact) {
    contacts[currentContactIndex] = contact;
    currentContactIndex = (currentContactIndex + 1) % 8;
}

Contact PhoneBook::getContact(int index) const {
    if (index < 0 || index >= 8) {
        // Handle error or return a default contact
    }
    return contacts[index];
}

int PhoneBook::getCurrentContactCount() const {
    return currentContactIndex;
}
