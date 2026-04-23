/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:36:11 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 15:51:48 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string		type;
		
		public:
						Animal();
						Animal(const Animal &copy);
		Animal			&operator=(const Animal &copy);
		virtual			~Animal();
		std::string		getType() const;
		void			setType(std::string type);
		virtual void	makeSound() const = 0;
};

#endif