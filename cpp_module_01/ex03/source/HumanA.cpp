/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 00:16:08 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/09 00:36:36 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA(void) {}

void HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

void HumanA::setName(std::string name)
{
	this->name = name;
}

Weapon const HumanA::getWeapon(void) const
{
	return (this->weapon);
}

std::string const HumanA::getName(void) const
{
	return (this->name);
}

void HumanA::attack(void)
{
	std::cout << getName();
	std::cout << " attacks with their ";
	std::cout << getWeapon().getType() << std::endl;
}
