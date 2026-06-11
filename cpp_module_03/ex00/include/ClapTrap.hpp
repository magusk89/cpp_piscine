/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:46:02 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 14:46:34 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	private:
		static const int		_maxHp = 10;
		static const int		_maxEp = 10;
		static const int		_atkDmg = 0;

		std::string		_name;
		int				_hp;
		int				_ep;
		int				_atk;

	public:
						ClapTrap();
						ClapTrap(std::string name);
						ClapTrap(const ClapTrap &copy);
						~ClapTrap();
		ClapTrap		&operator=(const ClapTrap &copy);
		void			setHp(const int hp);
		void			setEp(const int ep);
		void			setAtk(const int atk);
		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif