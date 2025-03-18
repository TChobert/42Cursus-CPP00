/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InvalidInputDisplayer.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:27:19 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/13 16:27:44 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InvalidInputDisplayer.hpp"

void	InvalidInputDisplayer::InvalidNameMessage(void)
{
	std::cerr << "Invalid name: a contact name cannot be empty, and must only contain letters or digits." << std::endl;
}

void	InvalidInputDisplayer::InvalidNumberMessage(void)
{
	std::cerr << "Invalid number: a number must be a series of digits." << std::endl;
}

void	InvalidInputDisplayer::InvalidNicknameMessage(void)
{
	std::cerr << "Invalid nickname: a contact ncikname cannot be empty, and must only contain letters or digits." << std::endl;
}

void	InvalidInputDisplayer::InvalidSecretMessage(void)
{
	std::cerr << "Invalid darkest secret: a contact secret cannot be empty, and must only contain letters or digits." << std::endl;
}

void	InvalidInputDisplayer::InvalidIndexMessage(void)
{
	std::cerr << "Invalid request: a contact index must be between 0 and 7." << std::endl;
}
