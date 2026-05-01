/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 02:47:12 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/01 23:33:13 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: \"./convert <argument_to_convert>\"" << std::endl;
		return 1;
	}
	ScalarConverter::convert(std::string(argv[1]));
	return 0;
}