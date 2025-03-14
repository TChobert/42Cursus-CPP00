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

#include "DisplayContactController.hpp"

void	DisplayContactController::HandleUserInput(void)
{
	std::string	user_input;
	size_t		contact_index;

	std::cout << "Please input the index of the contact that should be displayed" << std::endl;
	std::getline(std::cin, user_input);
	
}
