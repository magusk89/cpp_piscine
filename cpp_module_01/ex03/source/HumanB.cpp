/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 00:16:20 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 01:53:01 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::setName(std::string name)
{
	this->_name = name;
}

Weapon const HumanB::getWeapon(void) const
{
	return (*this->_weapon);
}

std::string const HumanB::getName(void) const
{
	return (this->_name);
}

void HumanB::attack(void)
{
	std::cout << getName();
	std::cout << " attacks with their ";
	std::cout << getWeapon().getType() << std::endl;
}
