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
# include "PhoneBook.hpp"
# include "DisplayContactUseCase.hpp"
# include "InvalidInputDisplayer.hpp"

class DisplayContactController
{
	private:

	DisplayContactUseCase	_display_contact_use_case;

	public:

	//void	DisplayContactsList(void);
	void	HandleUserInput(void);
};