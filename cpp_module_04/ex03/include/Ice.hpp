/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:57:23 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 16:04:44 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <AMateria.hpp>

class Ice: public AMateria
{
	public:
					Ice();
					Ice(const Ice &copy);
					~Ice();
		Ice			&operator=(const Ice &copy);
		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif