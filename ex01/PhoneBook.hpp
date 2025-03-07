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

	Contact	contacts_list[MAX_CONTACTS];
	size_t	last_contact_index;

	public:

	explicit	PhoneBook(void);
	Contact&	get_contact_in_contacts_list(size_t contact_index);
	size_t		get_last_contact_index(void);
	void		increase_last_contact_index(void);
	void		reset_last_contact_index(void);
	void		display_phonebook_content(void) const;
};

void	user_interface(PhoneBook& phonebook);
