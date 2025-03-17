/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookPresenter.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:15:11 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/17 15:15:20 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <iomanip>
# include "PhoneBook.hpp"
# include "Contact.hpp"

class PhoneBookPresenter
{
	private:

	static void			PrintContactRow(int index, const Contact& contact);
	static std::string	FormatField(const std::string& field);

	public:

	static void	DisplayPhoneBookContent(const PhoneBook& phonebook);
};
