/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:58:53 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 15:20:44 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice()
{
	this->setType("ice");
}

Ice::Ice(const Ice &copy)
{
	*this = copy;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(const Ice &copy)
{
	if (&copy != this)
		this->setType(copy.getType());
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
