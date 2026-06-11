/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:37:05 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 20:18:02 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal() : type("Animal")
{
	std::cout << "Default soul of an Animal created." << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
	std::cout << "Copy soul of an Animal created." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Soul of an Animal ceased to be." << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (&copy != this)
		type = copy.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "I have no mouth and I must scream" << std::endl;
}