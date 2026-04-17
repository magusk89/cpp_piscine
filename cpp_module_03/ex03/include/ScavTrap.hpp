/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 14:45:19 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/16 02:57:26 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <ClapTrap.hpp>

class ScavTrap : public virtual ClapTrap
{
	public:
					ScavTrap();
					ScavTrap(std::string new_name);
					ScavTrap(const ScavTrap &copy);
					~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &copy);
		void		attack(const std::string &target);
		void		guardGate(void);
};

#endif