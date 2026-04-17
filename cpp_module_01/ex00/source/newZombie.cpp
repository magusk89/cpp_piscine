/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 04:23:01 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/04 04:23:01 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie *Zombie::newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie;
	if (!zombie)
	{
		std::cout << "Memory allocation failed" << std::endl;
		return (zombie);
	}
	zombie->setName(name);
	zombie->announce();
	return (zombie);
}