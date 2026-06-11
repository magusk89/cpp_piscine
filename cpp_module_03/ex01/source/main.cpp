/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:45:12 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 16:01:07 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

int main(void)
{
	ScavTrap	scavver("Scavver");

	std::cout << scavver.getName() << " statistics: HP " << scavver.getHp() << ", EP " << scavver.getEp() << ", ATK " << scavver.getAtk() << std::endl;

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