/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddContactController.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:37:35 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/13 15:37:43 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AddContactController.hpp"
#include "QuitProgramException.hpp"

bool	AddContactController::GetContactValidFirstName(ContactDTO& contact_data)
{
	std::cout << "New contact first name: " << std::endl;
	std::getline(std::cin, contact_data.firstName);
	if (std::cin.eof())
	{
		throw (QuitProgramException());
	}
	if (ContactValidator::IsValidName(contact_data.firstName) == false)
	{
		InvalidInputDisplayer::InvalidNameMessage();
		return (false);
	}
	return (true);
}

bool	AddContactController::GetContactValidLastName(ContactDTO& contact_data)
{
	std::cout << "New contact last name: " << std::endl;
	std::getline(std::cin, contact_data.lastName);
	if (std::cin.eof())
	{
		throw (QuitProgramException());
	}
	if (ContactValidator::IsValidName(contact_data.lastName) == false)
	{
		InvalidInputDisplayer::InvalidNameMessage();
		return (false);
	}
	return (true);
}

bool	AddContactController::GetContatValidNickname(ContactDTO& contact_data)
{
	std::cout << "New contact nickanme: " << std::endl;
	std::getline(std::cin, contact_data.nickname);
	if (std::cin.eof())
	{
		throw (QuitProgramException());
	}
	if (ContactValidator::IsValidName(contact_data.nickname) == false)
	{
		InvalidInputDisplayer::InvalidNicknameMessage();
		return (false);
	}
	return (true);
}

bool	AddContactController::GetContactValidNumber(ContactDTO& contact_data)
{
	std::cout << "New contact number: " << std::endl;
	std::getline(std::cin, contact_data.phoneNumber);
	if (std::cin.eof())
	{
		throw (QuitProgramException());
	}
	if (ContactValidator::IsValidPhoneNumber(contact_data.phoneNumber) == false)
	{
		InvalidInputDisplayer::InvalidNumberMessage();
		return (false);
	}
	return (true);
}

bool	AddContactController::GetContactValidSecret(ContactDTO& contact_data)
{
	std::cout << "New contact darkest secret: " << std::endl;
	std::getline(std::cin, contact_data.darkestSecret);
	if (std::cin.eof())
	{
		throw (QuitProgramException());
	}
	if (ContactValidator::IsValidSecret(contact_data.darkestSecret) == false)
	{
		InvalidInputDisplayer::InvalidSecretMessage();
		return (false);
	}
	return (true);
}

void	AddContactController::HandleUserInput(PhoneBook& phonebook)
{
	ContactDTO	contact_data;

	if (!GetContactValidFirstName(contact_data) || !GetContactValidLastName(contact_data)
		|| !GetContatValidNickname(contact_data) || !GetContactValidNumber(contact_data)
		|| !GetContactValidSecret(contact_data))
	{
		return ;
	}
	_add_contact_use_case.Execute(phonebook, contact_data);
}
