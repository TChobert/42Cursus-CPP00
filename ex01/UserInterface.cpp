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

static void	check_input_validity(std::string& user_input)
{
	if (user_input[0] == 0)
	{
		std::exit(EXIT_FAILURE);
	}
}

void	user_interface(PhoneBook& phonebook)
{
	std::string	user_input;

	std::cout << "PhoneBook> ";
	std::getline(std::cin, user_input);
	check_input_validity(user_input);
	phonebook.get_contact_in_contacts_list(1).set_contact_first_name(user_input);
}
