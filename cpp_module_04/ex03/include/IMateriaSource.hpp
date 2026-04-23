/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:23:15 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 16:26:33 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include <AMateria.hpp>

class IMateriaSource
{
	public:
							IMateriaSource();
							IMateriaSource(const IMateriaSource &copy);
		virtual				~IMateriaSource() {}
		IMateriaSource		&operator=(const IMateriaSource &copy);
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif