/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:16:53 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/11 20:35:31 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	protected:
		std::string		ideas[100];

	public:
						Brain();
						Brain(const Brain &copy);
						~Brain();
		Brain			&operator=(const Brain &copy);
		std::string		getIdea(int index) const;
};

#endif