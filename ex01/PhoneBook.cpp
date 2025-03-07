/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:24:51 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/07 14:24:53 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	last_contact_index = 0;
}

//Getters fot PhoneBook class

Contact&	PhoneBook::get_contact_in_contacts_list(size_t contact_index)
{
	// SECU OUT OF RANGE !!
	return (contacts_list[contact_index]);
}

size_t	PhoneBook::get_last_contact_index(void)
{
	return (last_contact_index);
}

// Setters for PhoneBook class

void	PhoneBook::increase_last_contact_index(void)
{
	last_contact_index += 1;
}

void	PhoneBook::reset_last_contact_index(void)
{
	last_contact_index = 0;
}

// Display

void	PhoneBook::display_phonebook_content(void) const
{
	for (size_t i = 0; i < MAX_CONTACTS; ++i)
	{
		std::cout << "CONTACT NUMBER: " << i + 1 << std::endl;
		contacts_list[i].display_contact_content();
		std::cout << std::endl;
	}
}
