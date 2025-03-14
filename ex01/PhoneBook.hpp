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

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>

#define MAX_CONTACTS 8

class PhoneBook
{
	private:

	Contact	_contacts_list[MAX_CONTACTS];
	size_t	_last_contact_index;

	public:

	PhoneBook(void);
	~PhoneBook();
	void	AddContact(std::string first_name, std::string last_name,
			std::string nickname, std::string number, std::string darkest_secret);
	void	DisplayContact(size_t contact_index);
	void	UpdateLastContactIndex(void);

	//setters

	size_t	GetLastContactIndex(void);
};

bool	user_interface(PhoneBook& phonebook);
