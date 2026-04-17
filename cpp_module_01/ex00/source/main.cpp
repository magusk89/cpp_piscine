/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 04:23:16 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/04 04:23:16 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main(void)
{
	Zombie	*new_zombie = NULL;
	Zombie	random_chump;

	new_zombie = new_zombie->newZombie("Foo");
	random_chump.randomChump("Bar");
	delete new_zombie;
	return (0);
}