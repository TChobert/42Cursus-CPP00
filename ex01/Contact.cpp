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

// Default constructor for Contact class
Contact::Contact(void)
{
	first_name = "Empty";
	last_name = "Empty";
	nickname = "Empty";
	phone_number = "Empty";
	darkest_secret = "Empty";
}

// Setters for Contact class

void	Contact::set_contact_first_name(std::string user_input)
{
	first_name = user_input;
}

void	Contact::set_contact_last_name(std::string user_input)
{
	last_name = user_input;
}

void	Contact::set_contact_nickname(std::string user_input)
{
	last_name = user_input;
}

void	Contact::set_contact_phone_number(std::string user_input)
{
	last_name = user_input;
}

void	Contact::set_contact_darkest_secret(std::string user_input)
{
	last_name = user_input;
}

// Display

void	Contact::display_contact_content(void) const
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}
