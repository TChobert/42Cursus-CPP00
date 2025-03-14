/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:12:11 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/05 19:12:14 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ContactValidator.hpp"
# include <iostream>
# include <cstdlib>
# include <cctype>
# include <string>

class Contact
{
	private:

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

	public:

	Contact();
	~Contact();
	void		SetContactFirstName(const std::string& first_name);
	void		SetContactLastName(const std::string& last_name);
	void		SetContactNickname(const std::string& nickname);
	void		SetContactPhoneNumber(const std::string& phone_number);
	void		SetContactDarkestSecret(const std::string& darkest_secret);
	std::string	GetContactFirstName(void) const;
	std::string	GetContactLastName(void) const;
	std::string	GetContactNickname(void) const;
	std::string	GetContactPhoneNumber(void) const;
	std::string	GetContactDarkestSecret(void) const;
	void		DisplayContactContent(void) const;
};
