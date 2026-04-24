/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:59:02 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 20:59:42 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure() : AMateria()
{
	this->setType("cure");
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	this->setType(copy.getType());
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure &copy)
{
	if (&copy != this)
		this->setType(copy.getType());
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
