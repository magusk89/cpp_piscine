/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:22:31 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/13 19:01:25 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

Point::Point() : x(Fixed()), y(Fixed())
{
}

Point::Point(const float a, const float b) : x(Fixed(a)), y(Fixed(b))
{
}

Point::Point(const Point &copy) : x(copy.x), y(copy.y)
{
}

Point::~Point()
{
}

Point &Point::operator=(const Point &copy)
{
	this->~Point();
	new(this) Point(copy.x.toFloat(), copy.y.toFloat());
	return (*this);
}

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return (this->y);
}
