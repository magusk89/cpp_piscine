/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:32:52 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 22:10:19 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <exception>

template <typename T>
class Array
{
	private:
		T					*array;
		unsigned int		length;

	public:
							Array();
							Array(const unsigned int &length);
							Array(const Array &copy);
							~Array();
		Array				&operator=(const Array &copy);
		T					&operator[](const unsigned int &index);
		const unsigned int	&size() const;

		class OutOfBounds: public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

# include <Array.tpp>

#endif