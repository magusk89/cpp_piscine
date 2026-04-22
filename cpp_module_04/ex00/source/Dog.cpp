/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:37:18 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 00:12:38 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal()
{
	this->Animal::setType("Dog");
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	*this = copy;
}

Dog::~Dog()
{
}

Dog &Dog::operator=(const Dog &copy)
{
	if (&copy != this)
		this->Animal::setType(copy.type);
	return (*this);
	
}

void Dog::makeSound() const
{
	std::cout << "Bark bark! BARK! BA- Ahem, hello ladies and gentlemen, I'm a dog. BARKBARKBARKBARK!" << std::endl;
}
