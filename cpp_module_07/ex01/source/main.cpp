/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:09:25 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 15:31:24 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.h>

template <typename T>
void printer(T toPrint)
{
	std::cout << toPrint << std::endl;
}

int main(void)
{
	int				intArray[5] = {1, 2, 3, 4, 5};
	std::string		stringArray[3] = {"Another one", "And another one", "And a last one"};

	::iter(intArray, 5, printer);
	std::cout << std::endl;
	::iter("This is an example", 18, printer);
	std::cout << std::endl;
	::iter(stringArray, 3, printer);

	return (0);
}