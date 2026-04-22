/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:37:05 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 00:15:07 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal() : type("Animal")
{
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal::~Animal()
{
}

Animal &Animal::operator=(const Animal &copy)
{
	if (&copy != this)
		this->setType(copy.type);
	return (*this);
}

std::string Animal::getType() const
{
	return std::string(this->type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::makeSound() const
{
	std::cout << "I have no mouth and I must scream" << std::endl;
}