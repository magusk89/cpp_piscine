/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:36:31 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 00:08:24 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <Animal.hpp>

class Cat: public Animal
{
	public:
				Cat();
				Cat(const Cat &copy);
				~Cat();
		Cat		&operator=(const Cat &copy);
		void	makeSound() const;
};

#endif