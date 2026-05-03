/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:09:19 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 22:09:12 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>

int main(void)
{
	Array<std::string>	examples(5);

	examples[0] = "Sphere";
	examples[1] = "Square";
	examples[2] = "Skull";
	examples[3] = "Squat";
	examples[4] = "What?";

	std::cout << "Size of examples array: " << examples.size() << std::endl;

	try
	{
		for (unsigned int i = 0; i <= 5; i++)
			std::cout << examples[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}