/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:29:47 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 20:54:57 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
		if (copy.inventory[i] != NULL)
			this->inventory[i] = copy.inventory[i]->clone();
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (&copy != this)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
			this->inventory[i] = NULL;
			if (copy.inventory[i] != NULL)
				this->inventory[i] = copy.inventory[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = materia;
			return ;
		}
	}
	delete materia;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL && this->inventory[i]->getType() == type)
			return (this->inventory[i]->clone());
	return 0;
}
