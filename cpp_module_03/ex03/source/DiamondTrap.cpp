/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 02:57:34 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 18:27:10 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap_clap_name"), ScavTrap(), FragTrap(), _name("DiamondTrap")
{
	std::cout << "A DiamondTrap defaults and crashes through the walls!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	std::cout << _name << " parametizes and crashes through the walls!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
	std::cout << "A DiamondTrap crashes through the walls, copying " << copy._name << "!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << _name << " fell through the floor and exploded!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << _name << " is copying " << copy._name << "!" << std::endl;
	if (&copy != this)
	{
		ClapTrap::operator=(copy);
		_name = copy._name;
		_hp = copy._hp;
		_ep = copy._ep;
		_atk = copy._atk;
	}
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am \x1b[1;32m" << _name << "\x1b[0m. My ClapTrap name is \x1b[1;35m" << ClapTrap::_name << "\x1b[0m. I am an abomination." << std::endl;
}
