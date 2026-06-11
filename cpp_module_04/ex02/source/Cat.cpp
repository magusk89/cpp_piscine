/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:37:40 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 21:03:47 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat() : Animal()
{
	std::cout << "Default Cat purrs into existence." << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Copy Cat purrs into existence." << std::endl;
	type = "Cat";
	brain = new Brain(*copy.brain);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "A Cat found another home." << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (&copy != this)
	{
		if (brain)
			delete brain;
		type = "Cat";
		brain = new Brain(*copy.brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow... Prrr... Meow... Someone shut that dog up, its too loud!" << std::endl;
}
