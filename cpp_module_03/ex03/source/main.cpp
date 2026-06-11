/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:45:12 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 18:31:35 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

int main(void)
{
	DiamondTrap		diamonder("Diamonder");

	std::cout << diamonder.getName() << " statistics: HP " << diamonder.getHp() << ", EP " << diamonder.getEp() << ", ATK " << diamonder.getAtk() << std::endl;
	diamonder.attack("Coppie");
	diamonder.whoAmI();

	DiamondTrap		coppie(diamonder);

	coppie.whoAmI();

	DiamondTrap		ender;

	ender = diamonder;
	ender.whoAmI();
	return (0);
}