/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:12:10 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/03 04:34:43 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

template <typename T>
int easyfind(const T &container, const int item)
{
	if (std::find(container.begin(), container.end(), item) == container.end())
		throw NotFound();
	return (item);
}

const char *NotFound::what() const throw()
{
	return ("Error: item not found!");
}