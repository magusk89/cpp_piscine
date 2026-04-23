/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:36:31 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 15:03:34 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <Animal.hpp>
# include <Brain.hpp>

class Cat: public Animal, public Brain
{
	private:
		Brain*	brain;
	public:
				Cat();
				Cat(const Cat &copy);
				~Cat();
		Cat		&operator=(const Cat &copy);
		void	makeSound() const;
		Brain*	getBrain() const;
		void	setBrain(Brain* brain);
};

#endif