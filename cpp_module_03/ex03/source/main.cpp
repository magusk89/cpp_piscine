/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:45:12 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 18:24:14 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

int main(void)
{
	DiamondTrap		diamonder("Diamonder");

	diamonder.whoAmI();

	DiamondTrap		coppie(diamonder);

	coppie.whoAmI();

	DiamondTrap		ender;

	ender = diamonder;
	ender.whoAmI();
	return (0);
}