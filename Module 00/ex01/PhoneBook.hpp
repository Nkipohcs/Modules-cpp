/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:45:25 by nschwob           #+#    #+#             */
/*   Updated: 2023/12/06 19:59:02 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <vector>

class PhoneBook {
private:
    std::vector<Contact> contacts;

public:
    PhoneBook();
    void addContact(const Contact &contact);
    Contact getContact(int index) const;
    int getCurrentContactCount() const;
};

#endif // PHONEBOOK_HPP
