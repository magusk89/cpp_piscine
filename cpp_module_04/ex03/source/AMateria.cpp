/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:50:21 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 16:18:23 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria() : type("undefined")
{
}

AMateria::AMateria(std::string const &type)
{
	this->setType(type);
}

AMateria::AMateria(const AMateria &copy)
{
	this->setType(copy.getType());
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	if (&copy != this)
		this->setType(copy.getType());
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::setType(const std::string type)
{
	this->type = type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
