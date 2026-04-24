/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:16:35 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 16:16:49 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>

Character::Character() : name("unnamed")
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 99; i++)
		this->floor[i] = NULL;
}

Character::Character(std::string const &name)
{
	this->setName(name);
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 99; i++)
		this->floor[i] = NULL;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	for (int i = 0; i < 99; i++)
		if (this->floor[i] != NULL)
			delete this->floor[i];
}

Character &Character::operator=(const Character &copy)
{
	if (&copy != this)
	{
		this->setName(copy.getName());
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
			this->inventory[i] = NULL;
			if (copy.inventory[i] != NULL)
				this->inventory[i] = copy.inventory[i]->clone();
		}
		for (int i = 0; i < 99; i++)
		{
			if (this->floor[i] != NULL)
				delete this->floor[i];
			this->floor[i] = NULL;
			if (copy.floor[i] != NULL)
				this->floor[i] = copy.floor[i]->clone();
		}
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::setName(std::string const name)
{
	this->name = name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
	{
		for (int i = 0; i < 99; i++)
		{
			if (this->floor[i] == NULL)
			{
				this->floor[i] = this->inventory[idx];
				break ;
			}
			if (i == 98)
				delete this->inventory[idx];
		}
		this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}
