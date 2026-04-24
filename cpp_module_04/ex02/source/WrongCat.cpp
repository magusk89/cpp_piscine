/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:38:04 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 21:31:36 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Default WrongCat constructor called." << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "Copy WrongCat constructor called." << std::endl;
	this->setType(copy.getType());
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (&copy != this)
		this->setType(copy.getType());
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "MmmmmrrrrrrrRRRRREEEEEEEEEEEEEEEEEEEEEE-" << std::endl;
}
