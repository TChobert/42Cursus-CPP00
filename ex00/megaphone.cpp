/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:27:55 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/05 15:27:59 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>
# include <cctype>
# include <string>

static std::string	add_word_to_output(char *word)
{
	std::string	converted_word = word;

	for(size_t i = 0; i < converted_word.length(); ++i)
	{
		converted_word[i] = std::toupper(converted_word[i]);
	}
	return (converted_word);
}

static	std::string	build_megaphone_output(char **megaphone_input)
{
	std::string	megaphone_output;

	for (size_t i = 0; megaphone_input[i] != NULL; ++i)
	{
		megaphone_output += add_word_to_output(megaphone_input[i]);
	}
	return (megaphone_output);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (EXIT_SUCCESS);
	}
	else
	{
		std::string	megaphone_output = build_megaphone_output(av + 1);
		std::cout << megaphone_output << std::endl;
	}
	return (EXIT_SUCCESS);
}
