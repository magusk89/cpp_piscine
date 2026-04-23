/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:49:57 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 16:08:19 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <ICharacter.hpp>

class AMateria
{
	protected:
		std::string		type;
	public:
							AMateria();
							AMateria(std::string const &type);
							AMateria(const AMateria &copy);
							~AMateria();
		AMateria			&operator=(const AMateria &copy);
		std::string const	&getType() const;
		void				setType(const std::string type);
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif