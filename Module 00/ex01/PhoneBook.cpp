/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:45:28 by nschwob           #+#    #+#             */
/*   Updated: 2023/12/06 19:59:20 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

void PhoneBook::addContact(const Contact &contact) {
    contacts.push_back(contact);
}

Contact PhoneBook::getContact(int index) const {
    static Contact emptyContact; // Contact vide par défaut

    if (index >= 0 && static_cast<size_t>(index) < contacts.size()) {
        return contacts[index];
    }

    return emptyContact; // Retourne un contact vide si l'index est invalide
}

int PhoneBook::getCurrentContactCount() const {
    return contacts.size();
}
