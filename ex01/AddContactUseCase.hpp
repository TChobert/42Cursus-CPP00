/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_cases.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:08:22 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/12 18:08:24 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PhoneBook.hpp"
#include "ContactDTO.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>

class AddContactUseCase
{
	public:

	void	Execute(PhoneBook& phonebook, const ContactDTO& contact_data);
};
