/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 00:31:10 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 16:25:12 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
	std::cout << "A FragTrap defaults and frags the competition!" << std::endl;
	_hp = _maxHp;
	_ep = _maxEp;
	_atk = _atkDmg;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << _name << " parametizes and frags the competition!" << std::endl;
	_hp = _maxHp;
	_ep = _maxEp;
	_atk = _atkDmg;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "A FragTrap frags the competition, copying " << copy._name << std::endl;
	_hp = copy._hp;
	_ep = copy._ep;
	_atk = copy._atk;
}

FragTrap::~FragTrap()
{
	std::cout << _name << " was absolutely destroyed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << _name << " is doing the same as " << copy._name << std::endl;
	if (&copy != this)
	{
		_name = copy._name;
		_hp = copy._hp;
		_ep = copy._ep;
		_atk = copy._atk;
	}
	return (*this);
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap \x1b[1;32m" << _name << "\x1b[0m raises its mechanical grappler and high-fives the other ClapTraps!" << std::endl;
}
