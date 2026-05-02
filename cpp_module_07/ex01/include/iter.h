/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:05:05 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 15:26:07 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H
# include <iostream>

template <typename T>
void iter(T *array, const size_t length, void (*f)(T&))
{
	for (size_t i = 0; i < length; i++)
		(*f)(array[i]);
}

// template <typename T>
// void iter(T *array, const size_t length, void (*f)(const T&))
// {
// 	for (int i = 0; i < length; i++)
// 		(*f)(array[i]);
// }

#endif