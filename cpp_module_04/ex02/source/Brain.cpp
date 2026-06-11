/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:21:02 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 20:37:44 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "Gurgle";
	std::cout << "Default Brain constructor called." << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	std::cout << "Copy Brain constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	if (&copy != this)
		for (int i = 0; i < 100; i++)
			ideas[i] = copy.ideas[i];
	return (*this);
}

std::string Brain::getIdea(int index) const
{
	return (ideas[index]);
}
