/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:37:18 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 21:38:25 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal()
{
	std::cout << "Default Dog constructor called." << std::endl;
	this->Animal::setType("Dog");
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Copy Dog constructor called." << std::endl;
	this->Animal::setType(copy.getType());
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (&copy != this)
		this->Animal::setType(copy.getType());
	return (*this);
	
}

void Dog::makeSound() const
{
	std::cout << "Bark bark! BARK! BA- Ahem, hello ladies and gentlemen, I'm a dog. BARKBARKBARKBARK!" << std::endl;
}
