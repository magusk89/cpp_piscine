/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:20:06 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/04 17:42:31 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie *Zombie::zombieHorde(int N, std::string name)
{
	Zombie *zombies;

	zombies = new Zombie[N];
	if (!zombies)
	{
		std::cout << "Memory allocation failed" << std::endl;
		return (zombies);
	}
	for (int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
		zombies[i].announce();
	}
	return (zombies);
}