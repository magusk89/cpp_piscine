/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:45:41 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 16:04:01 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap() : _name("ClapTrap"), _hp(_maxHp), _ep(_maxEp), _atk(_atkDmg)
{
	std::cout << "A ClapTrap defaults into the arena!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(_maxHp), _ep(_maxEp), _atk(_atkDmg)
{
	std::cout << _name << " parametizes into the arena!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy._name), _hp(copy._hp), _ep(copy._ep), _atk(copy._atk)
{
	std::cout << "A ClapTrap entered the arena, copying " << copy._name << "!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " was smashed to pieces!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << _name << " is mimicking " << copy._name << std::endl;
	if (&copy != this)
	{
		_name = copy._name;
		_hp = copy._hp;
		_ep = copy._ep;
		_atk = copy._atk;
	}
	return (*this);
}

std::string ClapTrap::getName(void) const
{
	return (_name);
}

int ClapTrap::getHp(void) const
{
	return (_hp);
}

int ClapTrap::getEp(void) const
{
	return (_ep);
}

int ClapTrap::getAtk(void) const
{
	return (_atk);
}

void ClapTrap::setHp(const int hp)
{
	_hp = hp;
}

void ClapTrap::setEp(const int ep)
{
	_ep = ep;
}

void ClapTrap::setAtk(const int atk)
{
	_atk = atk;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hp <= 0)
		std::cout << "ClapTrap \x1b[1;32m" << _name << "\x1b[0m cannot attack \x1b[1;31m" << target << "\x1b[0m because it is dead." << std::endl;
	else if (_ep > 0)
	{
		_ep--;
		std::cout << "ClapTrap \x1b[1;32m" << _name << "\x1b[0m attacks \x1b[1;31m" << target << "\x1b[0m, causing \x1b[1;31m" << _atk << "\x1b[0m points of damage!" << std::endl;
		std::cout << "ClapTrap \x1b[1;32m" << _name << "\x1b[0m has \x1b[1;33m" << _ep << "\x1b[0m energy points left!" << std::endl;
	}
	else
		std::cout << "ClapTrap \x1b[1;32m" << _name << "\x1b[0m cannot attack \x1b[1;31m" << target << "\x1b[0m because it has no energy points!" << std::endl;
	std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
		std::cout << "Stop, stop! ClapTrap \x1b[1;32m" << _name << "\x1b[0m is already dead!" << std::endl;
	else
	{
		std::cout << "ClapTrap \x1b[1;32m" << _name << "\x1b[0m takes \x1b[1;31m" << amount << "\x1b[0m points of damage!" << std::endl;
		_hp -= amount;
		if (_hp <= 0)
			std::cout << "ClapTrap \x1b[1;32m" << _name << "\x1b[0m has died!" << std::endl;
		else
			std::cout << "ClapTrap \x1b[1;32m" << _name << "\x1b[0m has \x1b[1;35m" << _hp << "\x1b[0m hit points left!" << std::endl;
	}
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp <= 0)
		std::cout << "ClapTrap \x1b[1;32m" << _name << "\x1b[0m cannot repair itself because it is dead." << std::endl;
	else if (_ep > 0)
	{
		_ep--;
		_hp += amount;
		std::cout << "ClapTrap \x1b[1;32m" << _name << "\x1b[0m repairs itself, recovering \x1b[1;35m" << amount << "\x1b[0m hit points!" << std::endl;
		std::cout << "ClapTrap \x1b[1;32m" << _name << "\x1b[0m has \x1b[1;35m" << _hp << "\x1b[0m hit points left!" << std::endl;
		std::cout << "ClapTrap \x1b[1;32m" << _name << "\x1b[0m has \x1b[1;33m" << _ep << "\x1b[0m energy points left!" << std::endl;
	}
	else
		std::cout << "ClapTrap \x1b[1;32m" << _name << "\x1b[0m cannot be repaired because it has no energy points!" << std::endl;
	std::cout << std::endl;
}
