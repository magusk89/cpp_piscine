/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:14:53 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 01:23:57 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string		_name;

	public:
						Zombie();
						Zombie(std::string name);
						~Zombie();
		void			announce(void);
		void			setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif