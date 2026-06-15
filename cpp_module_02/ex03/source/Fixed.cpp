/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:05:27 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/15 14:20:26 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

const int Fixed::fraction = 8;

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(const Fixed &copy) : value(copy.value)
{
}

Fixed::Fixed(const int new_value) : value(new_value << fraction)
{
}

Fixed::Fixed(const float new_value) : value((int) roundf(new_value * (1 << fraction)))
{
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		value = copy.value;
	return (*this);
}

Fixed Fixed::operator+(const Fixed &copy) const
{
	return (toFloat() + copy.toFloat());
}

Fixed Fixed::operator-(const Fixed &copy) const
{
	return (toFloat() - copy.toFloat());
}

Fixed Fixed::operator*(const Fixed &copy) const
{
	return (toFloat() * copy.toFloat());
}

Fixed Fixed::operator/(const Fixed &copy) const
{
	return (toFloat() / copy.toFloat());
}

Fixed &Fixed::operator++(void)
{
	value++;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	result(*this);

	value++;
	return (result);
}

Fixed Fixed::operator--(int)
{
	Fixed	result(*this);

	value--;
	return (result);
}

bool Fixed::operator>(const Fixed &copy) const
{
	return (toFloat() > copy.toFloat());
}

bool Fixed::operator<(const Fixed &copy) const
{
	return (toFloat() < copy.toFloat());
}

bool Fixed::operator>=(const Fixed &copy) const
{
	return (toFloat() >= copy.toFloat());
}

bool Fixed::operator<=(const Fixed &copy) const
{
	return (toFloat() <= copy.toFloat());
}

bool Fixed::operator==(const Fixed &copy) const
{
	return (toFloat() == copy.toFloat());
}

bool Fixed::operator!=(const Fixed &copy) const
{
	return (toFloat() != copy.toFloat());
}

int Fixed::getRawBits(void) const
{
	return (value);
}

void Fixed::setRawBits(int const raw)
{
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

Fixed &Fixed::min(Fixed &value1, Fixed &value2)
{
	if (value1 < value2)
		return (value1);
	return (value2);
}

const Fixed &Fixed::min(const Fixed &value1, const Fixed &value2)
{
	if (value1 < value2)
		return (value1);
	return (value2);
}

Fixed &Fixed::max(Fixed &value1, Fixed &value2)
{
	if (value1 > value2)
		return (value1);
	return (value2);
}

const Fixed &Fixed::max(const Fixed &value1, const Fixed &value2)
{
	if (value1 > value2)
		return (value1);
	return (value2);
}

std::ostream &operator<<(std::ostream &output, const Fixed &value)
{
	return (output << value.toFloat());
}