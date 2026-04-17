/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:05:27 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/13 18:15:52 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

const int Fixed::fraction = 8;

Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::Fixed(const int new_value)
{
	this->setRawBits(new_value << this->fraction);
}

Fixed::Fixed(const float new_value)
{
	this->setRawBits((int) roundf(new_value * (1 << this->fraction)));
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	this->setRawBits(copy.getRawBits());
	return (*this);
}

Fixed Fixed::operator+(const Fixed &copy) const
{
	return (this->toFloat() + copy.toFloat());
}

Fixed Fixed::operator-(const Fixed &copy) const
{
	return (this->toFloat() - copy.toFloat());
}

Fixed Fixed::operator*(const Fixed &copy) const
{
	return (this->toFloat() * copy.toFloat());
}

Fixed Fixed::operator/(const Fixed &copy) const
{
	return (this->toFloat() / copy.toFloat());
}

Fixed &Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	result(*this);

	this->value++;
	return (result);
}

Fixed Fixed::operator--(int)
{
	Fixed	result(*this);

	this->value--;
	return (result);
}

bool Fixed::operator>(const Fixed &copy) const
{
	return (this->toFloat() > copy.toFloat());
}

bool Fixed::operator<(const Fixed &copy) const
{
	return (this->toFloat() < copy.toFloat());
}

bool Fixed::operator>=(const Fixed &copy) const
{
	return (this->toFloat() >= copy.toFloat());
}

bool Fixed::operator<=(const Fixed &copy) const
{
	return (this->toFloat() <= copy.toFloat());
}

bool Fixed::operator==(const Fixed &copy) const
{
	return (this->toFloat() == copy.toFloat());
}

bool Fixed::operator!=(const Fixed &copy) const
{
	return (this->toFloat() != copy.toFloat());
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float) this->value / (1 << this->fraction));
}

int Fixed::toInt(void) const
{
	return ((int) roundf((float) this->value / (1 << this->fraction)));
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