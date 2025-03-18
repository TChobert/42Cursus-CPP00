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
#include "QuitProgramException.hpp"

static void	command_dispatcher(PhoneBook& phonebook, std::string& user_input,
			SearchContactController& search_controller)
{
	if (user_input.compare("ADD") == 0)
	{
		AddContactController	add_controller;

		add_controller.HandleUserInput(phonebook);
	}
	else if (user_input.compare("SEARCH") == 0)
	{
		search_controller.HandleUserInput(phonebook);
	}
}

static void	prompt_gets_user_input(std::string& user_input)
{
	std::cout << "PhoneBook >> ADD | SEARCH | EXIT >> ";
	std::getline(std::cin, user_input);
}

bool user_interface(PhoneBook& phonebook)
{
	std::string				user_input;
	SearchContactController	search_controller;

	prompt_gets_user_input(user_input);
	if (std::cin.eof())
	{
		throw (QuitProgramException());
	}
	if (user_input.compare("EXIT") == 0)
	{
		std::cout << std::endl << "Phonebook: Eksit souksess !" << std::endl;
		return false;
	}
	command_dispatcher(phonebook, user_input, search_controller);
	return true;
}
