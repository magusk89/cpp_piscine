/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:22:49 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/13 19:00:00 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	eqA;
	float	eqB;
	float	eqC;

	eqA = ((point.getX().toFloat() - b.getX().toFloat()) * (a.getY().toFloat() - b.getY().toFloat())
		- (a.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat() - b.getY().toFloat()));

	eqB = ((point.getX().toFloat() - c.getX().toFloat()) * (b.getY().toFloat() - c.getY().toFloat())
		- (b.getX().toFloat() - c.getX().toFloat()) * (point.getY().toFloat() - c.getY().toFloat()));

	eqC = ((point.getX().toFloat() - a.getX().toFloat()) * (c.getY().toFloat() - a.getY().toFloat())
		- (c.getX().toFloat() - a.getX().toFloat()) * (point.getY().toFloat() - a.getY().toFloat()));

	bool	negative;
	bool	positive;

	negative = (eqA < 0) || (eqB < 0) || (eqC < 0);
	positive = (eqA > 0) || (eqB > 0) || (eqC > 0);

	return (!(negative && positive));
}