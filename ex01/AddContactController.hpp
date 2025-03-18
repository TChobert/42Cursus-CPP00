/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddContactController.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:34:56 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/13 15:34:58 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "PhoneBook.hpp"
# include "InvalidInputDisplayer.hpp"
# include "AddContactUseCase.hpp"
# include "ContactDTO.hpp"
# include <iostream>

class AddContactController
{
	private:

	AddContactUseCase _add_contact_use_case;

	bool	GetContactValidFirstName(ContactDTO& contact_data);
	bool	GetContactValidLastName(ContactDTO& contact_data);
	bool	GetContatValidNickname(ContactDTO& contact_data);
	bool	GetContactValidNumber(ContactDTO& contact_data);
	bool	GetContactValidSecret(ContactDTO& contact_data);
	bool	GetValidatedInput(const std::string& prompt, std::string& field,
				bool (*validator)(const std::string&), void (*error_displayer)(void));

	public:

	void	HandleUserInput(PhoneBook& phonebook);
};