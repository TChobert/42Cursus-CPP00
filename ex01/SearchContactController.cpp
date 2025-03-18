/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayContactController.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:55:04 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/14 11:55:06 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SearchContactController.hpp"
#include "PhoneBookPresenter.hpp"
#include "QuitProgramException.hpp"

void	SearchContactController::FlushUserInput(void)
{
	std::cin.clear();
	std::cin.ignore(10000, '\n');
}

bool	SearchContactController::IsValidIndex(const std::string& user_input)
{
	if (user_input.length() > 1 || user_input[0] < '0' || user_input[0] > '7')
		return (false);
	return (true);
}

t_index_validation_status	SearchContactController::GetValidContactIndexFromUserInput(int& contact_index)
{
	std::string	user_input;

	std::cout << "Please input the index of the contact that should be displayed" << std::endl;
	std::getline(std::cin, user_input);
	if (std::cin.eof())
	{
		throw (QuitProgramException());
	}
	if (IsValidIndex(user_input) == false)
	{
		return (INVALID_INDEX);
	}
	contact_index = std::atoi(user_input.c_str());
	return (VALID_INDEX);
}

void	SearchContactController::HandleUserInput(PhoneBook& phonebook)
{
	std::string	user_input;
	int			contact_index;

	PhoneBookPresenter::DisplayPhoneBookContent(phonebook);
	if (GetValidContactIndexFromUserInput(contact_index) == INVALID_INDEX)
	{
		InvalidInputDisplayer::InvalidIndexMessage();
		return ;
	}
	_search_contact_use_case.Execute(phonebook, contact_index);
}
