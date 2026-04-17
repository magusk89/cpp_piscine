/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 04:23:04 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/04 04:23:04 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::~Zombie(void)
{
	std::cout << getName() << " ran away" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

std::string const Zombie::getName(void) const
{
	return std::string(this->name);
}

void Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
