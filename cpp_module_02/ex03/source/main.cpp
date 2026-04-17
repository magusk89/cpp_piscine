/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:05:17 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/13 19:04:37 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

int main(void)
{
	Point	X(1, 0);
	Point	Y(0, 1);
	Point	Z(1, 1);
	Point	findA(0.5, 0.5);
	Point	findB(1.5, 0.5);

	if (bsp(X, Y, Z, findA))
		std::cout << "Point A was found inside the triangle XYZ" << std::endl;
	else
		std::cout << "Point A was found outside the triangle XYZ" << std::endl;

	if (bsp(X, Y, Z, findB))
		std::cout << "Point B was found inside the triangle XYZ" << std::endl;
	else
		std::cout << "Point B was found outside the triangle XYZ" << std::endl;

	return (0);
}