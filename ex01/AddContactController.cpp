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

void	AddContactController::HandleUserInput(PhoneBook& phonebook)
{
	ContactDTO	contact_data;

	std::cout << "New contact first name: " << std::endl;
	std::getline(std::cin, contact_data.firstName);
	if (ContactValidator::IsValidName(contact_data.firstName) == false)
	{
		InvalidInputDisplayer::InvalidNameMessage();
		return ;
	}
	std::cout << "New contact last name: " << std::endl;
	std::getline(std::cin, contact_data.lastName);
	if (ContactValidator::IsValidName(contact_data.lastName) == false)
	{
		InvalidInputDisplayer::InvalidNameMessage();
		return ;
	}
	std::cout << "New contact nickanme: " << std::endl;
	std::getline(std::cin, contact_data.nickname);
	if (ContactValidator::IsValidName == false)
	{
		InvalidInputDisplayer::InvalidNicknameMessage;
		return ;
	}
	std::cout << "New contact number: " << std::endl;
	std::getline(std::cin, contact_data.phoneNumber);
	if (ContactValidator::IsValidPhoneNumber == false)
	{
		InvalidInputDisplayer::InvalidNumberMessage();
		return ;
	}
	std::cout << "New contact darkest secret: " << std::endl;
	std::getline(std::cin, contact_data.darkestSecret);
	if (ContactValidator::IsValidSecret(contact_data.darkestSecret) == false)
	{
		InvalidInputDisplayer::InvalidSecretMessage();
		return ;
	}
	_add_contact_use_case.Execute(phonebook, contact_data);
}
