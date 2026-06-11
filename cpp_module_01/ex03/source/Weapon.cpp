/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:54:08 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 01:49:49 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon(void) {}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string const Weapon::getType(void) const
{
	return (this->_type);
}
