/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 00:31:10 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/16 03:05:04 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor called." << std::endl;
	this->setName("FragTrap");
	this->setHp(100);
	this->setEp(100);
	this->setAtk(30);
}

FragTrap::FragTrap(std::string new_name) : ClapTrap(new_name)
{
	this->setName(new_name);
	std::cout << this->getName() << " parametized FragTrap constructor called." << std::endl;
	this->setHp(100);
	this->setEp(100);
	this->setAtk(30);
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy FragTrap constructor called, copying " << copy.name << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << this->getName() << " FragTrap destructor called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << this->getName() << " FragTrap copied from " << copy.name << std::endl;
	if (&copy != this)
	{
		this->setName(copy.name);
		this->setHp(copy.hp);
		this->setEp(copy.ep);
		this->setAtk(copy.atk);
	}
	return (*this);
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap \x1b[1;32m" << this->getName() << "\x1b[0m raises its mechanical grappler and high-fives the other ClapTraps!" << std::endl;
}
