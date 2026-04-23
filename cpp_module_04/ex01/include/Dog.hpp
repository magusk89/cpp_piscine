/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:36:19 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 15:03:41 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <Animal.hpp>
# include <Brain.hpp>

class Dog: public Animal, public Brain
{
	private:
		Brain*	brain;
	public:
				Dog();
				Dog(const Dog &copy);
				~Dog();
		Dog		&operator=(const Dog &copy);
		void	makeSound() const;
		Brain*	getBrain() const;
		void	setBrain(Brain* brain);
};

#endif