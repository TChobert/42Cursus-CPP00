/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:27:48 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/07 15:27:56 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "AddContactController.hpp"
#include "SearchContactController.hpp"

static void	command_dispatcher(PhoneBook& phonebook, std::string& user_input)
{
	if (user_input.compare("ADD") == 0)
	{
		AddContactController	controller;

		controller.HandleUserInput(phonebook);
	}
	else if (user_input.compare("SEARCH") == 0)
	{
		SearchContactController	controller;

		controller.HandleUserInput(phonebook);
	}
}

bool user_interface(PhoneBook& phonebook)
{
	std::string user_input;

	std::cout << "PhoneBook> ";
	std::getline(std::cin, user_input);
	if (std::cin.eof())
	{
		std::cout << std::endl << "Exit" << std::endl;
		return false;
	}
	if (user_input.compare("EXIT") == 0)
	{
		std::cout << "Exit" << std::endl;
		return false;
	}
	command_dispatcher(phonebook, user_input);
	return true;
}
