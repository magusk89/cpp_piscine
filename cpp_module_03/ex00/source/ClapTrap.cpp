/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:45:41 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/15 20:56:03 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap() : name("ClapTrap"), hp(10), ep(10), atk(0)
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string new_name) : name(new_name), hp(10), ep(10), atk(0)
{
	std::cout << this->getName() << " parametized constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called, copying " << copy.name << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->getName() << " destructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << this->name << " copied from " << copy.name << std::endl;
	if (&copy != this)
	{
		this->setName(copy.name);
		this->setHp(copy.hp);
		this->setEp(copy.ep);
		this->setAtk(copy.atk);
	}
	return (*this);
}

std::string ClapTrap::getName(void)
{
	return (this->name);
}

int ClapTrap::getHp(void)
{
	return (this->hp);
}

int ClapTrap::getEp(void)
{
	return (this->ep);
}

int ClapTrap::getAtk(void)
{
	return (this->atk);
}

void ClapTrap::setName(std::string new_name)
{
	this->name = new_name;
}

void ClapTrap::setHp(int new_hp)
{
	this->hp = new_hp;
}

void ClapTrap::setEp(int new_ep)
{
	this->ep = new_ep;
}

void ClapTrap::setAtk(int new_atk)
{
	this->atk = new_atk;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hp <= 0)
		std::cout << "ClapTrap \x1b[1;32m" << this->name << "\x1b[0m cannot attack \x1b[1;31m" << target << "\x1b[0m because it is dead." << std::endl;
	else if (this->ep > 0)
	{
		this->ep--;
		std::cout << "ClapTrap \x1b[1;32m" << this->name << "\x1b[0m attacks \x1b[1;31m" << target << "\x1b[0m, causing \x1b[1;31m" << this->atk << "\x1b[0m points of damage!" << std::endl;
		std::cout << "ClapTrap \x1b[1;32m" << this->name << "\x1b[0m has \x1b[1;33m" << this->ep << "\x1b[0m energy points left!" << std::endl;
	}
	else
		std::cout << "ClapTrap \x1b[1;32m" << this->name << "\x1b[0m cannot attack \x1b[1;31m" << target << "\x1b[0m because it has no energy points!" << std::endl;
	std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp <= 0)
		std::cout << "Stop, stop! ClapTrap \x1b[1;32m" << this->name << "\x1b[0m is already dead!" << std::endl;
	else
	{
		std::cout << "ClapTrap \x1b[1;32m" << this->name << "\x1b[0m takes \x1b[1;31m" << amount << "\x1b[0m points of damage!" << std::endl;
		this->hp -= amount;
		if (this->hp <= 0)
			std::cout << "ClapTrap \x1b[1;32m" << this->name << "\x1b[0m has died!" << std::endl;
		else
			std::cout << "ClapTrap \x1b[1;32m" << this->name << "\x1b[0m has \x1b[1;35m" << this->hp << "\x1b[0m hit points left!" << std::endl;
	}
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp <= 0)
		std::cout << "ClapTrap \x1b[1;32m" << this->name << "\x1b[0m cannot repair itself because it is dead." << std::endl;
	else if (this->ep > 0)
	{
		this->ep--;
		this->hp += amount;
		std::cout << "ClapTrap \x1b[1;32m" << this->name << "\x1b[0m repairs itself, recovering \x1b[1;35m" << amount << "\x1b[0m hit points!" << std::endl;
		std::cout << "ClapTrap \x1b[1;32m" << this->name << "\x1b[0m has \x1b[1;35m" << this->hp << "\x1b[0m hit points left!" << std::endl;
		std::cout << "ClapTrap \x1b[1;32m" << this->name << "\x1b[0m has \x1b[1;33m" << this->ep << "\x1b[0m energy points left!" << std::endl;
	}
	else
		std::cout << "ClapTrap \x1b[1;32m" << this->name << "\x1b[0m cannot be repaired because it has no energy points!" << std::endl;
	std::cout << std::endl;
}
