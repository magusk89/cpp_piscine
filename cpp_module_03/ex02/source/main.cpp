/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:45:12 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 16:25:51 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int main(void)
{
	FragTrap	fragger("Fragger");

	std::cout << fragger.getName() << " statistics: HP " << fragger.getHp() << ", EP " << fragger.getEp() << ", ATK " << fragger.getAtk() << std::endl;

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