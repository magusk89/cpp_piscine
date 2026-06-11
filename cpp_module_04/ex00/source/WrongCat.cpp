/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:38:04 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 20:30:14 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Default Wrong Cat spawned." << std::endl;
	type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "Copy Wrong Cat spawned." << std::endl;
	type = "Wrong Cat";
}

WrongCat::~WrongCat()
{
	std::cout << "A Wrong Cat chose to go away..." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (&copy != this)
		type = "Wrong Cat";
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "MmmmmrrrrrrrRRRRREEEEEEEEEEEEEEEEEEEEEE-" << std::endl;
}
