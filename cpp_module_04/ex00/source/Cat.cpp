/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:37:40 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 00:12:27 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat() : Animal()
{
	this->Animal::setType("Cat");
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
}

Cat::~Cat()
{
}

Cat &Cat::operator=(const Cat &copy)
{
	if (&copy != this)
		this->Animal::setType(copy.type);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow... Prrr... Meow... Someone shut that dog up, its too loud!" << std::endl;
}
