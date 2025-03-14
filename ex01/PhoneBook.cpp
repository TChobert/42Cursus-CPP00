/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:24:51 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/07 14:24:53 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
	: _last_contact_index(0)
{}

PhoneBook::~PhoneBook() {}

void	PhoneBook::UpdateLastContactIndex(void)
{
	++_last_contact_index;
	if (_last_contact_index == MAX_CONTACTS)
		_last_contact_index = 0;
}

void	PhoneBook::AddContact(std::string first_name, std::string last_name,
	std::string nickname, std::string number, std::string darkest_secret)
{
	_contacts_list[_last_contact_index].SetContactFirstName(first_name);
	_contacts_list[_last_contact_index].SetContactLastName(last_name);
	_contacts_list[_last_contact_index].SetContactNickname(nickname);
	_contacts_list[_last_contact_index].SetContactPhoneNumber(number);
	_contacts_list[_last_contact_index].SetContactDarkestSecret(darkest_secret);
	this->UpdateLastContactIndex();
}

void	PhoneBook::DisplayContact(size_t contact_index)
{
	_contacts_list[contact_index].DisplayContactContent();
}

void	PhoneBook::DisplayContact(size_t contact_index)
{
	_contacts_list[contact_index].DisplayContactContent();
}

// Getters for PhoneBook class

size_t	PhoneBook::GetLastContactIndex(void)
{
	return (_last_contact_index);
}
