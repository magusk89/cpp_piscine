/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:36:50 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/23 00:06:43 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
	public:
					WrongCat();
					WrongCat(const WrongCat &copy);
					~WrongCat();
		WrongCat	&operator=(const WrongCat &copy);
};

#endif