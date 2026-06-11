/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:47:37 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 01:52:35 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <Weapon.hpp>
# include <iostream>

class HumanB
{
	private:
		Weapon				*_weapon;
		std::string			_name;

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