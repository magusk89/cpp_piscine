/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:49:41 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 21:27:58 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>
#include <Ice.hpp>
#include <Cure.hpp>
#include <MateriaSource.hpp>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	IMateriaSource* sauce;
	sauce = src;

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	ICharacter* you;
	you = me;
	tmp = sauce->createMateria("ice");
	you->equip(tmp);
	tmp = sauce->createMateria("cure");
	you->equip(tmp);
	you->use(2, *bob);
	you->use(3, *bob);
	you->use(0, *bob);
	you->use(1, *bob);


	delete bob;
	delete me;
	delete src;
	return 0;
}