/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 14:45:19 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 14:54:46 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <ClapTrap.hpp>

class ScavTrap : public ClapTrap
{
	private:
		static const int	_maxHp = 100;
		static const int	_maxEp = 50;
		static const int	_atkDmg = 20;

	public:
						ScavTrap();
						ScavTrap(std::string name);
						ScavTrap(const ScavTrap &copy);
						~ScavTrap();
		ScavTrap		&operator=(const ScavTrap &copy);
		void			attack(const std::string &target);
		void			guardGate(void);
};

#endif