/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:45:12 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/16 00:32:11 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int main(void)
{
	FragTrap	fragger("Fragger");

	fragger.attack("Clapper");
	fragger.beRepaired(5);
	fragger.takeDamage(8);
	fragger.takeDamage(3);
	fragger.takeDamage(100);
	fragger.beRepaired(10);
	fragger.attack("Scavver");

	fragger.setHp(100);
	fragger.setEp(0);
	fragger.attack("Trapper");
	fragger.beRepaired(5);

	fragger.highFiveGuys();

	return (0);
}