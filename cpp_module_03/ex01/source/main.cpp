/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:45:12 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/16 00:31:06 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

int main(void)
{
	ScavTrap	scavver("Scavver");

	scavver.attack("Clapper");
	scavver.beRepaired(5);
	scavver.takeDamage(8);
	scavver.takeDamage(3);
	scavver.takeDamage(100);
	scavver.beRepaired(10);
	scavver.attack("Clapper");

	scavver.setHp(100);
	scavver.setEp(0);
	scavver.attack("Trapper");
	scavver.beRepaired(5);

	scavver.guardGate();

	return (0);
}