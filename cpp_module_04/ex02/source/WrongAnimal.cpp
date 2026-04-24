/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:37:53 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 21:31:27 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy WrongAnimal constructor called." << std::endl;
	this->setType(copy.getType());
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (&copy != this)
		this->setType(copy.getType());
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return std::string(this->type);
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "I have the wrong mouth and I can't scream" << std::endl;
}
