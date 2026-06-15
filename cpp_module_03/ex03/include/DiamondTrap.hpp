/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 02:51:01 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/16 00:25:03 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP
# include <ScavTrap.hpp>
# include <FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string		_name;
		using			FragTrap::_maxHp;
		using			ScavTrap::_maxEp;
		using			FragTrap::_atkDmg;
	
	public:
						DiamondTrap();
						DiamondTrap(std::string name);
						DiamondTrap(const DiamondTrap &copy);
						~DiamondTrap();
		DiamondTrap		&operator=(const DiamondTrap &copy);
		using			ScavTrap::attack;
		void			whoAmI(void);
};

#endif