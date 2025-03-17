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

static void	command_dispatcher(PhoneBook& phonebook, std::string& user_input,
				AddContactController& add_controller, SearchContactController& search_controller)
{
	if (user_input.compare("ADD") == 0)
	{
		add_controller.HandleUserInput(phonebook);
	}
	else if (user_input.compare("SEARCH") == 0)
	{
		search_controller.HandleUserInput(phonebook);
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
}

static void	prompt_gets_user_input(std::string& user_input)
{
	std::cout << "PhoneBook> ";
	std::getline(std::cin, user_input);
}

bool user_interface(PhoneBook& phonebook)
{
	std::string				user_input;
	AddContactController	add_controller;
	SearchContactController	search_controller;

	prompt_gets_user_input(user_input);
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
	command_dispatcher(phonebook, user_input, add_controller, search_controller);
	return true;
}
