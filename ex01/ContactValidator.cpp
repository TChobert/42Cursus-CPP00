/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactValidator.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:50:11 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/13 15:50:14 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactValidator.hpp"

bool	ContactValidator::IsDigit(const std::string& phone_number)
{
	for (size_t i = 0; i < phone_number.length(); ++i)
	{
		if (std::isdigit(phone_number[i]) == false)
			return (false);
	}
	return (true);
}

bool	ContactValidator::IsValidPhoneNumber(const std::string& phone_number)
{
	if (phone_number.empty() || IsDigit(phone_number) == false)
		return (false);
	return (true);
}

bool	ContactValidator::IsValidName(const std::string& name)
{
	if (name.empty())
		return (false);
	for (size_t i = 0; i < name.length(); ++i)
	{
		if (std::isalnum(name[i]) == false)
		{
			if (name[i] == ' ')
				continue;
			else
				return (false);
		}
	}
	return (true);
}

bool	ContactValidator::IsValidSecret(const std::string& secret)
{
	if (secret.empty())
		return (false);
	for (size_t i = 0; i < secret.length(); ++i)
	{
		if (std::isalnum(secret[i]) == false)
		{
			if (secret[i] == ' ')
				continue ;
			else
				return (false);
		}
	}
	return (true);
}
