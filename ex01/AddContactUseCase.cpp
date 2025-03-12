/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_cases.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:07:57 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/12 18:08:02 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AddContactUseCase.hpp"

void	AddContactUseCase::Execute(PhoneBook& phonebook, const ContactDTO& contact_data)
{
	phonebook.AddContact(contact_data.firstName, contact_data.lastName, contact_data.nickname,
		contact_data.phoneNumber, contact_data.darkestSecret);
}
