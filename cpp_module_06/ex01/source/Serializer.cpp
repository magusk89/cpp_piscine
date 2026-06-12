/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 02:40:28 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/12 17:26:26 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &copy)
{
	(void) copy;
}

Serializer::~Serializer() {}

Serializer &Serializer::operator=(const Serializer &copy)
{
	(void) copy;
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
