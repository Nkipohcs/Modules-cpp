/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:45:40 by nschwob           #+#    #+#             */
/*   Updated: 2023/10/01 11:45:41 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

void Contact::setFirstName(const std::string &name) {
    this->firstName = name;
}

void Contact::setLastName(const std::string &name) {
    this->lastName = name;
}

void Contact::setNickname(const std::string &nickname) {
    this->nickname = nickname;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &secret) {
    this->darkestSecret = secret;
}

std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}

std::string Contact::truncateOrFill(const std::string &str) const {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    } else {
        std::string result = str;
        while (result.length() < 10) {
            result = " " + result;
        }
        return result;
    }
}
