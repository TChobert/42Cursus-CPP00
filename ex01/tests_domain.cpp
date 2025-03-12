/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_phonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:28:44 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/12 14:28:47 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cassert>
#include <iostream>

void runTests()
{
	PhoneBook	phonebook;
	std::string	contact_index = "2";

	std::cout << std::endl;
	phonebook.DisplayContact(0);
	std::cout << std::endl;

	std::cout << "Test: Initialisation...\n";
	assert(phonebook.GetLastContactIndex() == 0);

	// Ajouter un premier contact
	std::cout << "Test: Ajout d'un premier contact...\n";
	phonebook.AddContact("John", "Doe", "JD", "0654487896", "Secret 1");
	assert(phonebook.GetLastContactIndex() == 1);

	// Ajouter plusieurs contacts jusqu'à remplir le carnet
	std::cout << "Test: Remplissage du carnet...\n";
	for (int i = 1; i < MAX_CONTACTS; ++i)
	{
		phonebook.AddContact(contact_index, "User", "TU", "0658967569", "Secret X");
		++contact_index[0];
	}
	assert(phonebook.GetLastContactIndex() == 0); // Doit revenir à 0 après MAX_CONTACTS ajouts

	std::cout << std::endl;
	phonebook.DisplayContact(0);
	std::cout << std::endl;
	std::cout << std::endl;
	phonebook.DisplayContact(5);
	std::cout << std::endl;
	std::cout << std::endl;
	phonebook.DisplayContact(7);
	std::cout << std::endl;

	std::cout << "Test: Contact invalide...\n";
	phonebook.AddContact("", "12", "", "065448789659", "");
	std::cout << std::endl;

	std::cout << "Tous les tests sont passés avec succès ! 🎉\n";
}

int main()
{
	runTests();
	return 0;
}
