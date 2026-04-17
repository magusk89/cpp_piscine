/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:45:58 by alebarbo          #+#    #+#             */
/*   Updated: 2025/12/31 02:22:05 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define DFL_MSG "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << DFL_MSG << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
			argv[i][j] = toupper(argv[i][j]);
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return (0);
}