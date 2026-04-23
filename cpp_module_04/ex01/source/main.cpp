/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:35:23 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 15:22:55 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Brain.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int main()
{
	int set = 10;
	const Animal* animal[set];

	for (int i = 0; i < set; i++)
	{
		if (i % 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}

	std::cout << std::endl;

	for (int i = 0; i < set; i++)
		delete animal[i];
	return 0;
}