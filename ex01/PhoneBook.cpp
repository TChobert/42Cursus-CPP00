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

void	PhoneBook::display_phonebook_content(void) const
{
	for (size_t i = 0; i < MAX_CONTACTS; ++i)
	{
		std::cout << "CONTACT NUMBER: " << i + 1 << std::endl;
		contacts[i].display_contact_content();
		std::cout << std::endl;
	}
}
