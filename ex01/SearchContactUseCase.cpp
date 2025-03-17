/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayContactUseCase.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:37:18 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/14 11:37:23 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SearchContactUseCase.hpp"

void	SearchContactUseCase::Execute(PhoneBook& phonebook, int contact_index)
{
	if (contact_index < 0 || contact_index > INDEX_MAX)
		return ;

	const Contact&	contact = phonebook.GetContact(contact_index);
	ContactPresenter::DisplayContactContent(contact);
}
