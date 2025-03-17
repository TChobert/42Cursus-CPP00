/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayContactUseCase.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:37:09 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/14 11:37:11 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "PhoneBook.hpp"
# include <iostream>
# include <cstdlib>
# include <cctype>
# include <string>

class SearchContactUseCase
{
	public:

	void	Execute(PhoneBook& phonebook, size_t contact_index);
};
