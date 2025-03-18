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
	return (GetValidatedInput("New contact first name: ", contact_data.firstName,
		ContactValidator::IsValidName, InvalidInputDisplayer::InvalidNameMessage));
}

bool	AddContactController::GetContactValidLastName(ContactDTO& contact_data)
{
	return (GetValidatedInput("New contact last name: ", contact_data.lastName,
		ContactValidator::IsValidName, InvalidInputDisplayer::InvalidNameMessage));
}

bool	AddContactController::GetContatValidNickname(ContactDTO& contact_data)
{
	return (GetValidatedInput("New contact nickname: ", contact_data.nickname,
		ContactValidator::IsValidName, InvalidInputDisplayer::InvalidNicknameMessage));
}

bool	AddContactController::GetContactValidNumber(ContactDTO& contact_data)
{
	return (GetValidatedInput("New contact phone number: ", contact_data.phoneNumber,
		ContactValidator::IsValidPhoneNumber, InvalidInputDisplayer::InvalidNumberMessage));
}

bool	AddContactController::GetContactValidSecret(ContactDTO& contact_data)
{
	return (GetValidatedInput("New contact darkest secret: ", contact_data.darkestSecret,
		ContactValidator::IsValidSecret, InvalidInputDisplayer::InvalidSecretMessage));
}

bool	AddContactController::GetValidatedInput(const std::string& prompt, std::string& field,
			bool (*Validator)(const std::string&), void (*ErrorDisplayer)(void))
{
	std::cout << prompt << std::endl;
	std::getline(std::cin, field);

	if (std::cin.eof())
	{
		throw (QuitProgramException());
	}
	if (Validator(field) == false)
	{
		ErrorDisplayer();
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
