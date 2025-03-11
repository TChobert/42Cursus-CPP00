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

// Default constructor for Contact class with an initialisation list :

Contact::Contact(void)
	: _first_name("Empty"), _last_name("Empty"), _nickname("Empty"), _phone_number("Empty"), _darkest_secret("Empty") 
{}

// Setters for Contact class :

// Display :

void	Contact::DisplayContactContent(void) const
{
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "Last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone_number << std::endl;
	std::cout << "Darkest secret: " << _darkest_secret << std::endl;
}
