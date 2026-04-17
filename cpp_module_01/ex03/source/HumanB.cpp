/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 00:16:20 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/09 00:40:42 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->weapon = NULL;
	this->name = name;
}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}

Weapon const HumanB::getWeapon(void) const
{
	return (*this->weapon);
}

std::string const HumanB::getName(void) const
{
	return (this->name);
}

void HumanB::attack(void)
{
	std::cout << getName();
	std::cout << " attacks with their ";
	std::cout << getWeapon().getType() << std::endl;
}
