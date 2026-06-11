/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 00:16:08 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 01:52:27 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void) {}

void HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

void HumanA::setName(std::string name)
{
	this->_name = name;
}

Weapon const HumanA::getWeapon(void) const
{
	return (this->_weapon);
}

std::string const HumanA::getName(void) const
{
	return (this->_name);
}

void HumanA::attack(void)
{
	std::cout << getName();
	std::cout << " attacks with their ";
	std::cout << getWeapon().getType() << std::endl;
}
