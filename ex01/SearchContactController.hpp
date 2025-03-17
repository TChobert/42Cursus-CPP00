/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayContactController.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:55:11 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/14 11:55:20 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <cstdlib>
# include "PhoneBook.hpp"
# include "SearchContactUseCase.hpp"
# include "InvalidInputDisplayer.hpp"

typedef enum	e_index_validation_status
{
	VALID_INDEX,
	INVALID_INDEX,
}				t_index_validation_status;

class SearchContactController
{
	private:

	SearchContactUseCase	_search_contact_use_case;

	t_index_validation_status	GetValidContactIndexFromUserInput(int& contact_index);
	bool						IsValidIndex(const std::string& user_input);

	public:

	void	HandleUserInput(PhoneBook& phonebook);
	void	FlushUserInput(void);
};
