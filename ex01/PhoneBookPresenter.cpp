/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookPresenter.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:15:25 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/17 15:15:46 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookPresenter.hpp"

void PhoneBookPresenter::PrintContactRow(int index, const Contact& contact)
{
	std::cout << std::setw(10) << index << " | "
				<< std::setw(10) << FormatField(contact.GetContactFirstName()) << " | "
				<< std::setw(10) << FormatField(contact.GetContactLastName()) << " | "
				<< std::setw(10) << FormatField(contact.GetContactNickname()) << std::endl;
}

std::string PhoneBookPresenter::FormatField(const std::string& field)
{
	if (field.length() > 10)
	{
		return field.substr(0, 9) + ".";
	}
	return (field);
}

void PhoneBookPresenter::DisplayPhoneBookContent(const PhoneBook& phonebook)
{
	std::cout << std::setw(10) << "Index" << " | "
			<< std::setw(10) << "First Name" << " | "
			<< std::setw(10) << "Last Name" << " | "
			<< std::setw(10) << "Nickname" << std::endl;
	std::cout << std::string(45, '-') << std::endl;

	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		PrintContactRow(i, phonebook.GetContact(i));
	}
}
