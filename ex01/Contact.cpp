/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:06:43 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/07 13:06:45 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Default constructor for Contact class with an initialization list :

Contact::Contact(void)
	: _first_name("Empty"), _last_name("Empty"), _nickname("Empty"),
		_phone_number("Empty"), _darkest_secret("Empty") 
{}

// Destructor for Contact class

Contact::~Contact() {}

// Setters for Contact class :

void	Contact::SetContactFirstName(const std::string& first_name)
{
	if (ContactValidator::IsValidName(first_name) == true)
		_first_name = first_name;
	else
		std::cerr << "Contact: invalid contact first name" << std::endl;
}

void	Contact::SetContactLastName(const std::string& last_name)
{
	if (ContactValidator::IsValidName(last_name))
		_last_name = last_name;
	else
		std::cerr << "Contact: invalid contact last name" << std::endl;
}

void	Contact::SetContactNickname(const std::string& nickname)
{
	if (ContactValidator::IsValidName(nickname))
		_nickname = nickname;
	else
		std::cerr <<"Contact: a contact nickname can't be empty." << std::endl;
}

void	Contact::SetContactPhoneNumber(const std::string& phone_number)
{
	if (ContactValidator::IsValidPhoneNumber(phone_number))
		_phone_number = phone_number;
	else
		std::cerr << "Contact: invalid phone number" << std::endl;
}

void	Contact::SetContactDarkestSecret(const std::string& darkest_secret)
{
	if (ContactValidator::IsValidSecret(darkest_secret))
		_darkest_secret = darkest_secret;
	else
		std::cerr << "Contact: a contact darkest secret can't be empty." << std::endl;
}

// Getters for Contact class :

std::string	Contact::GetContactFirstName(void) const
{
	return (_first_name);
}

std::string	Contact::GetContactLastName(void) const
{
	return (_last_name);
}

std::string	Contact::GetContactNickname(void) const
{
	return (_nickname);
}

std::string	Contact::GetContactPhoneNumber(void) const
{
	return (_phone_number);
}

std::string	Contact::GetContactDarkestSecret(void) const
{
	return (_darkest_secret);
}

// Display :

void	Contact::DisplayContactContent(void) const
{
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "Last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone_number << std::endl;
	std::cout << "Darkest secret: " << _darkest_secret << std::endl;
}
