/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:47:37 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/09 00:40:39 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <Weapon.hpp>
# include <iostream>

class HumanB
{
	private:
		Weapon				*weapon;
		std::string			name;

	public:
							HumanB(std::string name);
							~HumanB(void);
		void				setWeapon(Weapon &weapon);
		void				setName(std::string name);
		Weapon const		getWeapon(void) const;
		std::string const	getName(void) const;
		void				attack(void);
};

#endif