/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 14:46:16 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/16 03:05:10 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called." << std::endl;
	this->setName("ScavTrap");
	this->setHp(100);
	this->setEp(50);
	this->setAtk(20);
}

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(new_name)
{
	this->setName(new_name);
	std::cout << this->getName() << " parametized ScavTrap constructor called." << std::endl;
	this->setHp(100);
	this->setEp(50);
	this->setAtk(20);
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy ScavTrap constructor called, copying " << copy.name << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->getName() << " ScavTrap destructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << this->getName() << " ScavTrap copied from " << copy.name << std::endl;
	if (&copy != this)
	{
		this->setName(copy.name);
		this->setHp(copy.hp);
		this->setEp(copy.ep);
		this->setAtk(copy.atk);
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->hp <= 0)
		std::cout << "ScavTrap \x1b[1;32m" << this->name << "\x1b[0m cannot smack \x1b[1;31m" << target << "\x1b[0m because it is dead." << std::endl;
	else if (this->ep > 0)
	{
		this->ep--;
		std::cout << "ScavTrap \x1b[1;32m" << this->name << "\x1b[0m smacks \x1b[1;31m" << target << "\x1b[0m, causing \x1b[1;31m" << this->atk << "\x1b[0m points of damage!" << std::endl;
		std::cout << "ScavTrap \x1b[1;32m" << this->name << "\x1b[0m has \x1b[1;33m" << this->ep << "\x1b[0m energy points left!" << std::endl;
	}
	else
		std::cout << "ScavTrap \x1b[1;32m" << this->name << "\x1b[0m cannot smack \x1b[1;31m" << target << "\x1b[0m because it has no energy points!" << std::endl;
	std::cout << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap \x1b[1;32m" << this->getName() << "\x1b[0m is now in Gate Keeper mode!" << std::endl;
}
