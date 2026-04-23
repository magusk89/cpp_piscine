/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:58:15 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 16:05:45 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <AMateria.hpp>

class Cure: public AMateria
{
	public:
					Cure();
					Cure(const Cure &copy);
					~Cure();
		Cure		&operator=(const Cure &copy);
		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif