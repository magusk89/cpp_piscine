/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:21:02 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 21:30:11 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->setIdea("Gurgle", i);
	std::cout << "Default Brain constructor called." << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy Brain constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->setIdea(copy.getIdea(i), i);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	if (&copy != this)
		for (int i = 0; i < 100; i++)
			this->setIdea(copy.getIdea(i), i);
	return (*this);
}

std::string Brain::getIdea(int index) const
{
	return std::string(this->ideas[index]);
}

void Brain::setIdea(std::string idea, int index)
{
	this->ideas[index] = idea;
}
