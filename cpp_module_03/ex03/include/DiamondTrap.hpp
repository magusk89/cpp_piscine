/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 02:51:01 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/16 03:13:14 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP
# include <ScavTrap.hpp>
# include <FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string		name;
	
	public:
						DiamondTrap();
						DiamondTrap(std::string new_name);
						DiamondTrap(const DiamondTrap &copy);
						~DiamondTrap();
		DiamondTrap		&operator=(const DiamondTrap &copy);
		std::string		getName(void);
		void			setName(std::string new_name);
		void			attack(const std::string &target);
		void			whoAmI(void);
};

#endif