/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:18:25 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/13 19:01:29 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include <Fixed.hpp>

class Point
{
	private:
		const Fixed		x;
		const Fixed		y;

	public:
						Point();
						Point(const float a, const float b);
						Point(const Point &copy);
						~Point();
		Point			&operator=(const Point &copy);
		Fixed			getX(void) const;
		Fixed			getY(void) const;
};

bool			bsp(Point const a, Point const b, Point const c, Point const point);

#endif