/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:46:02 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/15 02:27:22 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	private:
		std::string		name;
		int				hp;
		int				ep;
		int				atk;

	public:
						ClapTrap();
						ClapTrap(std::string new_name);
						ClapTrap(const ClapTrap &copy);
						~ClapTrap();
		ClapTrap		&operator=(const ClapTrap &copy);
		std::string		getName(void);
		int				getHp(void);
		int				getEp(void);
		int				getAtk(void);
		void			setName(std::string new_name);
		void			setHp(int new_hp);
		void			setEp(int new_ep);
		void			setAtk(int new_atk);
		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif