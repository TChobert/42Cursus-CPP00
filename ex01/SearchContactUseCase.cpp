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

void	SearchContactUseCase::Execute(PhoneBook& phonebook, size_t contact_index)
{
	phonebook.DisplayContact(contact_index);
}
