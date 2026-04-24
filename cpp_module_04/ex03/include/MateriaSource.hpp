/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:37:49 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 15:56:29 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <IMateriaSource.hpp>

class MateriaSource: public IMateriaSource
{
	private:
		AMateria			*inventory[4];
	public:
							MateriaSource();
							MateriaSource(const MateriaSource &copy);
							~MateriaSource();
		MateriaSource		&operator=(const MateriaSource &copy);
		void				learnMateria(AMateria*);
		AMateria			*createMateria(std::string const &type);

};

#endif