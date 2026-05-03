/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:25:54 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/03 04:34:46 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

template <typename T>
int easyfind(const T &container, const int item);

class NotFound: public std::exception
{
	public:
		const char	*what() const throw();
};

# include <easyfind.tpp>

#endif