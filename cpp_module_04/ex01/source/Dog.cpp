/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:37:18 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 21:36:16 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal(), Brain()
{
	std::cout << "Default Dog constructor called." << std::endl;
	this->setBrain(new Brain());
	this->setType("Dog");
}

Dog::Dog(const Dog &copy) : Animal(copy), Brain(copy)
{
	std::cout << "Copy Dog constructor called." << std::endl;
	this->setType(copy.getType());
	this->setBrain(copy.getBrain());
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (&copy != this)
	{
		this->setType(copy.getType());
		this->setBrain(copy.getBrain());
	}
	return (*this);
	
}

void Dog::makeSound() const
{
	std::cout << "Bark bark! BARK! BA- Ahem, hello ladies and gentlemen, I'm a dog. BARKBARKBARKBARK!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}

void Dog::setBrain(Brain* brain)
{
	this->brain = brain;
}