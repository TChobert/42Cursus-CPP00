/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactValidator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:50:20 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/13 15:50:35 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>

class ContactValidator
{
	public:

	static bool	IsDigit(const std::string& phone_number);
	static bool	IsValidPhoneNumber(const std::string& phone_number);
	static bool	IsValidName(const std::string& name);
	static bool	IsValidSecret(const std::string& secret);
};