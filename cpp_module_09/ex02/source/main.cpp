/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 00:02:01 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/24 00:29:32 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cerr << "Usage: ./PmergeMe <x0> <x1> <x2> ... <xn>" << std::endl;
		return (1);
	}

	PmergeMe pm;

	if (!pm.parseInput(argc, argv))
		return (1);

	pm.run();
	return (0);
}