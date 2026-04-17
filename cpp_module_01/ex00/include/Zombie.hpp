/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 04:22:49 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/04 04:22:49 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string			name;
		void				announce(void);
		
	public:
							~Zombie(void);
		Zombie				*newZombie(std::string name);
		void				randomChump(std::string name);
		void				setName(std::string name);
		std::string const	getName(void) const;
};

#endif