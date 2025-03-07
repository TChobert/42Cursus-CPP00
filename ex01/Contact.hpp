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

# include <iostream>
# include <cstdlib>
# include <cctype>
# include <string>

class Contact
{
	private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	public:

	explicit Contact();
	void	set_contact_first_name(std::string edit);
	void	set_contact_last_name(std::string edit);
	void	set_contact_nickname(std::string edit);
	void	set_contact_phone_number(std::string edit);
	void	set_contact_darkest_secret(std::string edit);
	void	display_contact_content(void) const;
};
