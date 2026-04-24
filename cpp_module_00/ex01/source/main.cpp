/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 22:37:39 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 22:17:20 by alebarbo         ###   ########.fr       */
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
		if (!(std::getline(std::cin, command)))
			phonebook.exit();
		if (!command.compare("ADD"))
			phonebook.add();
		if (!command.compare("SEARCH"))
			phonebook.search();
		if (!command.compare("EXIT"))
			phonebook.exit();
	}
	return (1);
}