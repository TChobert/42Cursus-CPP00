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

// static void	check_input_validity(std::string& user_input)
// {
// 	if (user_input[0] == 0)
// 	{
// 		std::exit(EXIT_FAILURE);
// 	}
// }

static void	get_new_contact_first_name(PhoneBook& phonebook)
{
	std::string	new_contact_name;
	size_t		last_contact_index = phonebook.get_last_contact_index();

	while (true)
	{
		std::cout << "New contact name: ";
		std::getline(std::cin, new_contact_name);
		if (new_contact_name.empty())
		{
			std::cout << "Contact name cannot be empty!" << std::endl;
		}
		else 
			break ;
	}
	phonebook.get_contact_in_contacts_list(last_contact_index).set_contact_first_name(new_contact_name);
	phonebook.increase_last_contact_index();
	if (phonebook.get_last_contact_index() == (MAX_CONTACTS))
		phonebook.reset_last_contact_index();
}

static void	get_user_new_contact(PhoneBook& phonebook)
{
	get_new_contact_first_name(phonebook);
}

static void	command_interpreter(PhoneBook& phonebook, std::string& user_input)
{
	if (user_input.compare("ADD") == 0)
	{
		get_user_new_contact(phonebook);
		return ;
	}
	else if (user_input.compare("DISPLAY") == 0)
	{
		phonebook.display_phonebook_content();
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
	//check_input_validity(user_input);
	command_interpreter(phonebook, user_input);
}
