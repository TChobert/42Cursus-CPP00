/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:06:43 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/07 13:06:45 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Default constructor for contact class
Contact::Contact(void)
{
	first_name = "Empty";
	last_name = "Empty";
	nickname = "Empty";
	phone_number = "Empty";
	darkest_secret = "Empty";
}

void	Contact::edit_contact_first_name(std::string edit)
{
	first_name = edit;
}

void	Contact::edit_contact_last_name(std::string edit)
{
	last_name = edit;
}

void	Contact::edit_contact_nickname(std::string edit)
{
	last_name = edit;
}

void	Contact::edit_contact_phone_number(std::string edit)
{
	last_name = edit;
}

void	Contact::edit_contact_darkest_secret(std::string edit)
{
	last_name = edit;
}

void	Contact::display_contact_content(void) const
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}
