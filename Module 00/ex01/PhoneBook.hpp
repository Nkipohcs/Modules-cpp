/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:45:25 by nschwob           #+#    #+#             */
/*   Updated: 2023/10/01 11:45:26 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int currentContactIndex;

public:
    PhoneBook();
    void addContact(const Contact &contact);
    Contact getContact(int index) const;
    int getCurrentContactCount() const;
};

#endif // PHONEBOOK_HPP
