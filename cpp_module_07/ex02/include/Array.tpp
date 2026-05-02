/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 16:32:51 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 18:07:32 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP
# include <Array.hpp>

template <typename T>
Array<T>::Array() : array(new T[0]), length(0)
{
}

template <typename T>
Array<T>::Array(const unsigned int &length) : array(new T[length]), length(length)
{
}

template <typename T>
Array<T>::Array(const Array &copy) : array(new T[copy.length]), length(copy.length)
{
	for (unsigned int i = 0; i < this->length; i++)
		this->array[i] = copy.array[i];
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy)
{
	if (&copy != this)
	{
		this->array = new T[copy.length];
		this->length = copy.length;
		for (unsigned int i = 0; i < this->length; i++)
			this->array[i] = copy.array[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](const unsigned int &index)
{
	if (index >= this->length)
		throw OutOfBounds();
	return (this->array[index]);
}

template <typename T>
const unsigned int &Array<T>::size() const
{
	return (this->length);
}

template <typename T>
const char *Array<T>::OutOfBounds::what() const throw()
{
	return ("Error: index is out of bounds!");
}

#endif