/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:45:12 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/15 02:43:15 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main(void)
{
	ClapTrap	trapper("Trapper");
	ClapTrap	clapper("Clapper");

	trapper.attack("Clapper");
	trapper.beRepaired(5);
	trapper.takeDamage(8);
	trapper.takeDamage(3);
	trapper.takeDamage(5);
	trapper.beRepaired(10);
	trapper.attack("Clapper");

	clapper.setEp(0);
	clapper.attack("Trapper");
	clapper.beRepaired(5);

	return (0);
}