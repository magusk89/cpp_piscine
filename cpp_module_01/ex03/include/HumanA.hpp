/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:47:26 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/09 00:35:19 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <Weapon.hpp>
# include <iostream>

class HumanA
{
	private:
		Weapon				&weapon;
		std::string			name;

	public:
							HumanA(std::string name, Weapon &weapon);
							~HumanA(void);
		void				setWeapon(Weapon weapon);
		void				setName(std::string name);
		Weapon const		getWeapon(void) const;
		std::string const	getName(void) const;
		void				attack(void);
};

#endif