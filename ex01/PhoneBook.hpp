/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:07:02 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/05 19:07:05 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"
# include <iostream>
# include <cstdlib>
# include <cctype>
# include <string>

# define MAX_CONTACTS 8

class PhoneBook
{
	private:

	Contact	_contacts_list[MAX_CONTACTS];
	size_t	_last_contact_index;

	public:

	PhoneBook(void);
	~PhoneBook();

	// Setters :

	void	AddContact(std::string first_name, std::string last_name,
			std::string nickname, std::string number, std::string darkest_secret);
	void	UpdateLastContactIndex(void);

	// Getters:

	size_t	GetLastContactIndex(void) const;
	Contact	GetContact(size_t contact_index) const;
};

bool	user_interface(PhoneBook& phonebook);
