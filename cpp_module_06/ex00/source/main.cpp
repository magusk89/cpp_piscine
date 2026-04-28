/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 02:47:12 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/28 02:50:56 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		std::cout << "Error: only one argument can be converted." << std::endl;
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}