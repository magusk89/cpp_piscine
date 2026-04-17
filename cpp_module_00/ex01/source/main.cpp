/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 22:37:39 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/03 00:24:30 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	phonebook.zero_indexes();
	while (1)
	{
		std::cout << ERS_SCR << "MY AMAZING PHONEBOOK" << std::endl;
		std::cout << "ENTER A COMMAND - ADD | SEARCH | EXIT: ";
		std::cin >> command;
		std::cin.clear();
		std::cin.ignore();
		if (!command.compare("ADD"))
			phonebook.add();
		if (!command.compare("SEARCH"))
			phonebook.search();
		if (!command.compare("EXIT"))
			phonebook.exit();
	}
	return (1);
}