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

int	main(int ac, char **av)
{
	if (ac > 2)
		return (EXIT_FAILURE);
	else if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (EXIT_SUCCESS);
	}
	else
	{
		std::string	megaphone_input = av[1];
		for (size_t i = 0; i < megaphone_input.length(); i++)
		{
			megaphone_input[i] = std::toupper(megaphone_input[i]);
		}
		std::cout << megaphone_input << std::endl;
	}
	return (EXIT_SUCCESS);
}