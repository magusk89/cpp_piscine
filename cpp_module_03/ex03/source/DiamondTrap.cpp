/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 02:57:34 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/16 03:19:05 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Default DiamondTrap constructor called." << std::endl;
	this->setName("DiamondTrap");
	this->ClapTrap::setName(this->getName() + "_clap_name");
	this->setHp(FragTrap::getHp());
	this->setEp(ScavTrap::getEp());
	this->setAtk(FragTrap::getAtk());
}

DiamondTrap::DiamondTrap(std::string new_name) : ClapTrap(new_name), ScavTrap(new_name), FragTrap(new_name)
{
	this->setName(new_name);
	std::cout << this->getName() << " parametized DiamondTrap constructor called." << std::endl;
	this->ClapTrap::setName(this->getName() + "_clap_name");
	this->setHp(FragTrap::getHp());
	this->setEp(ScavTrap::getEp());
	this->setAtk(FragTrap::getAtk());
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "Copy DiamondTrap constructor called, copying " << copy.name << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->getName() << " DiamondTrap destructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << this->getName() << " DiamondTrap copied from " << copy.name << std::endl;
	if (&copy != this)
	{
		this->setName(copy.name);
		this->ClapTrap::setName(copy.ClapTrap::name);
		this->setHp(copy.hp);
		this->setEp(copy.ep);
		this->setAtk(copy.atk);
	}
	return (*this);
}

std::string DiamondTrap::getName(void)
{
	return (this->name);
}

void DiamondTrap::setName(std::string new_name)
{
	this->name = new_name;
}

void DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am \x1b[1;32m" << this->getName() << "\x1b[0m. My ClapTrap name is \x1b[1;35m" << this->ClapTrap::getName() << "\x1b[0m. I am an abomination." << std::endl;
}
