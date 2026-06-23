/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:06:15 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/23 23:42:52 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./btc <inputfile>" << std::endl;
		return (1);
	}

	BitcoinExchange btc;

	if (!btc.loadDatabase(DATABASE))
		return (1);
	btc.processInput(argv[1]);
	return (0);
}