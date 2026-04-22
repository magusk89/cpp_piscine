/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:37:53 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 00:14:58 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (&copy != this)
		this->setType(copy.type);
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
