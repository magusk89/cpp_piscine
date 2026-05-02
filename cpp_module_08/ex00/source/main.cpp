/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:20:10 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 19:33:38 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>
#include <easyfind.tpp>

int main(void)
{
	std::vector<int>	container;

	for (int i = 0; i < 5; i++)
		container.insert(container.begin() + i, i);

	try
	{
		std::cout << *(::easyfind(container, 2)) << std::endl;
		std::cout << *(::easyfind(container, 4)) << std::endl;
		std::cout << *(::easyfind(container, 10)) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}