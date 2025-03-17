/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactPresenter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:41:56 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/17 14:41:58 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactPresenter.hpp"

void	ContactPresenter::DisplayContactContent(const Contact& contact)
{
	std::cout << "First name: " << contact.GetContactFirstName() << std::endl;
	std::cout << "Last name: " << contact.GetContactLastName() << std::endl;
	std::cout << "Nickname: " << contact.GetContactNickname() << std::endl;
	std::cout << "Phone number: " << contact.GetContactPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.GetContactDarkestSecret() << std::endl;
}
