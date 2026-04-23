/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:37:40 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 15:03:20 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat() : Animal()
{
	std::cout << "Default Cat constructor called." << std::endl;
	this->setBrain(new Brain());
	this->Animal::setType("Cat");
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Copy Cat constructor called." << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (&copy != this)
	{
		this->Animal::setType(copy.getType());
		this->setBrain(copy.getBrain());
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow... Prrr... Meow... Someone shut that dog up, its too loud!" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->brain);
}

void Cat::setBrain(Brain* brain)
{
	this->brain = brain;
}