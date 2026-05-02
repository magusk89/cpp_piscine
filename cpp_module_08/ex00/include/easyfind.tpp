/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:12:10 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 19:40:20 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

template <typename T>
typename T::iterator easyfind(const T &container, const int item)
{
	for (typename T::iterator i = const_cast<T&>(container).begin(); i != container.end(); i++)
		if (*i == item)
			return (i);
	throw NotFound();
}

const char *NotFound::what() const throw()
{
	return ("Error: item not found!");
}