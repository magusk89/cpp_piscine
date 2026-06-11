/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 00:18:16 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 18:17:21 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <ClapTrap.hpp>

class FragTrap : virtual public ClapTrap
{
	protected:
		static const int	_maxHp = 100;
		static const int	_maxEp = 100;
		static const int	_atkDmg = 30;

	public:
					FragTrap();
					FragTrap(std::string name);
					FragTrap(const FragTrap &copy);
					~FragTrap();
		FragTrap	&operator=(const FragTrap &copy);
		void		highFiveGuys(void);
};

#endif