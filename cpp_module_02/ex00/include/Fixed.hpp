/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:05:38 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/13 15:39:46 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	fraction;

	public:
							Fixed();
							Fixed(const Fixed &copy);
							~Fixed();
		Fixed				&operator=(const Fixed &copy);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

#endif