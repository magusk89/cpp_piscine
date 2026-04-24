/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:27:27 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 15:50:24 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <ICharacter.hpp>

class Character: public ICharacter
{
	private:
		AMateria			*inventory[4];
		AMateria			*floor[99];
		std::string			name;
	public:
							Character();
							Character(std::string const &name);
							Character(const Character &copy);
							~Character();
		Character			&operator=(const Character &copy);
		std::string const	&getName() const;
		void				setName(std::string const name);
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif