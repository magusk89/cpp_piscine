/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 14:46:16 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 15:44:53 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
	std::cout << "A ScavTrap defaults and slashes through the gates!" << std::endl;
	_hp = _maxHp;
	_ep = _maxEp;
	_atk = _atkDmg;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << _name << " parametizes and slashes through the gates!" << std::endl;
	_hp = _maxHp;
	_ep = _maxEp;
	_atk = _atkDmg;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "A ScavTrap slashes through the gates, copying " << copy._name << "!" << std::endl;
	_hp = copy._hp;
	_ep = copy._ep;
	_atk = copy._atk;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << " got wrecked!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << _name << " is mirroring " << copy._name << std::endl;
	if (&copy != this)
	{
		_name = copy._name;
		_hp = copy._hp;
		_ep = copy._ep;
		_atk = copy._atk;
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (_hp <= 0)
		std::cout << "ScavTrap \x1b[1;32m" << _name << "\x1b[0m cannot smack \x1b[1;31m" << target << "\x1b[0m because it is dead." << std::endl;
	else if (_ep > 0)
	{
		_ep--;
		std::cout << "ScavTrap \x1b[1;32m" << _name << "\x1b[0m smacks \x1b[1;31m" << target << "\x1b[0m, causing \x1b[1;31m" << _atk << "\x1b[0m points of damage!" << std::endl;
		std::cout << "ScavTrap \x1b[1;32m" << _name << "\x1b[0m has \x1b[1;33m" << _ep << "\x1b[0m energy points left!" << std::endl;
	}
	else
		std::cout << "ScavTrap \x1b[1;32m" << _name << "\x1b[0m cannot smack \x1b[1;31m" << target << "\x1b[0m because it has no energy points!" << std::endl;
	std::cout << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap \x1b[1;32m" << _name << "\x1b[0m is now in Gate Keeper mode!" << std::endl;
}
