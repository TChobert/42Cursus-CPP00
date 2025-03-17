/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InvalidInputDisplayer.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:27:56 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/13 16:28:07 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>
# include <cctype>
# include <string>

class InvalidInputDisplayer
{
	public:

	static void	InvalidNameMessage(void);
	static void	InvalidNicknameMessage(void);
	static void InvalidNumberMessage(void);
	static void	InvalidSecretMessage(void);
	static void	InvalidIndexMessage(void);
};
