/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 00:04:56 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/13 00:59:47 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments!" << std::endl;
		return (1);
	}

	Harl			harl;
	std::string		complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int				i = 0;
	while (std::string(argv[1]) != complaints[i] && i < 4)
		i++;
	switch (i)
	{
		case 0:
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		case 1:
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		case 2:
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << DEFAULT << std::endl;
			break;
	}
	return (0);
}