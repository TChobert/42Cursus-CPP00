/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:35:31 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/07 14:35:34 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "QuitProgramException.hpp"

int main(void)
{
	PhoneBook phonebook;

	try
	{
		while (user_interface(phonebook))
		{
		}
	}
	catch (const QuitProgramException& e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
