/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:37:05 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 14:26:46 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal() : type("Animal")
{
	std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy Animal constructor called." << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (&copy != this)
		this->setType(copy.getType());
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