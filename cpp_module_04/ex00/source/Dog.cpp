/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:37:18 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 20:21:45 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal()
{
	std::cout << "Default Dog woofs into reality." << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Copy Dog woofs into reality." << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "A Dog got loose in the park." << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (&copy != this)
		type = "Dog";
	return (*this);
	
}

void Dog::makeSound() const
{
	std::cout << "Bark bark! BARK! BA- Ahem, hello ladies and gentlemen, I'm a dog. BARKBARKBARKBARK!" << std::endl;
}
