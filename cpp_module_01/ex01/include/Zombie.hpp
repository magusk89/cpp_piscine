/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:14:53 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/09 01:09:54 by alebarbo         ###   ########.fr       */
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
							Zombie(std::string name);
							~Zombie(void);
		void				setName(std::string name);
		std::string const	getName(void) const;
		Zombie				*zombieHorde(int N, std::string name);
};

#endif