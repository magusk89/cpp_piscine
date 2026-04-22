/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:36:41 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 00:08:17 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:
		std::string		type;
	
	public:
						WrongAnimal();
						WrongAnimal(const WrongAnimal &copy);
						~WrongAnimal();
		WrongAnimal		&operator=(const WrongAnimal &copy);
		std::string		getType() const;
		void			setType(std::string type);
		void			makeSound() const;
};

#endif