/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:35:23 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 00:33:37 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongCat* wrong_i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << wrong_meta->getType() << " " << std::endl;
	wrong_meta->makeSound();
	std::cout << wrong_i->getType() << " " << std::endl;
	wrong_i->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wrong_meta;
	delete wrong_i;
	return 0;
}