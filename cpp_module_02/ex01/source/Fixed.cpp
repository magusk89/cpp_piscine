/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:05:27 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/15 14:18:16 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

const int Fixed::fraction = 8;

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : value(copy.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int new_value) : value(new_value << fraction)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float new_value) : value((int) roundf(new_value * (1 << fraction)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		value = copy.value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float) value / (1 << fraction));
}

int Fixed::toInt(void) const
{
	return ((int) roundf((float) value / (1 << fraction)));
}

std::ostream &operator<<(std::ostream &output, const Fixed &value)
{
	return (output << value.toFloat());
}