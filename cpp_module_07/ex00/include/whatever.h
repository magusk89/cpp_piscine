/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:29:53 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 15:00:23 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H
# include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	T swp = x;
	x = y;
	y = swp;
}

template <typename T>
T min(T &x, T &y)
{
	if (x < y)
		return (x);
	return (y);
}

template <typename T>
T max(T &x, T &y)
{
	if (x > y)
		return (x);
	return (y);
}

#endif