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
//modif BOOL !!
bool	SearchContactController::GetValidContactIndexFromUserInput(int& contact_index)
{
	std::cout << "Please input the index of the contact that should be displayed" << std::endl;
	std::cin >> contact_index;
	return (true);
}

void	SearchContactController::HandleUserInput(PhoneBook& phonebook)
{
	std::string	user_input;
	int			contact_index;

	if (!GetValidContactIndexFromUserInput(contact_index))
		return ;
	_search_contact_use_case.Execute(phonebook, contact_index);
}
