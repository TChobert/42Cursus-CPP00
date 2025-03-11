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

static void	command_dispatcher(PhoneBook& phonebook, std::string& user_input)
{
	if (user_input.compare("ADD") == 0)
	{

	}
	else if (user_input.compare("DISPLAY") == 0)
	{
		
	}
	else if (user_input.compare("EXIT") == 0)
	{
		std::cout << "Exit" << std::endl;
		std::exit(EXIT_SUCCESS);
	}
}

void	user_interface(PhoneBook& phonebook)
{
	std::string	user_input;

	std::cout << "PhoneBook> ";
	std::getline(std::cin, user_input);
	if (std::cin.eof())
	{
		std::cout << std::endl << "Exit" << std::endl;
		std::exit (EXIT_FAILURE);
	}
	command_dispatcher(phonebook, user_input);
}
