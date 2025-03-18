/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   QuitProgramException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:45:47 by tchobert          #+#    #+#             */
/*   Updated: 2025/03/18 13:46:17 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "QuitProgramException.hpp"

const char	*QuitProgramException::what(void) const throw()
{
	return ("Hasta la vista, baby !");
}