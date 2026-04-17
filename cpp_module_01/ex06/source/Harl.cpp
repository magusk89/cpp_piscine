/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 00:05:01 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/13 00:31:52 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

void Harl::debug(void)
{
	std::cout << DEBUG << std::endl;
}

void Harl::info(void)
{
	std::cout << INFO << std::endl;
}

void Harl::warning(void)
{
	std::cout << WARNING << std::endl;
}

void Harl::error(void)
{
	std::cout << ERROR << std::endl;
}

void Harl::complain(std::string level)
{
	std::string		complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void			(Harl::*ptrMemberFunction[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
		if (complaints[i] == level)
			(this->*ptrMemberFunction[i])();
}