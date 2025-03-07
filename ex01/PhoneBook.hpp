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

	Contact	contacts[MAX_CONTACTS];

	public:

	void	display_phonebook_content(void) const;
};
