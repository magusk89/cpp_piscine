/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:07:11 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 16:17:37 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <AMateria.hpp>

class ICharacter
{
	private:
		AMateria	*inventory[4];

	public:
									ICharacter();
									ICharacter(const ICharacter &copy);
		ICharacter					&operator=(const ICharacter &copy);
		virtual						~ICharacter() {}
		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria *m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter &target) = 0;
};

#endif