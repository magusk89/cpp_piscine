/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 00:18:16 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/16 02:57:23 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <ClapTrap.hpp>

class FragTrap : public virtual ClapTrap
{
	public:
					FragTrap();
					FragTrap(std::string new_name);
					FragTrap(const FragTrap &copy);
					~FragTrap();
		FragTrap	&operator=(const FragTrap &copy);
		void		highFiveGuys(void);
};

#endif