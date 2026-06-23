/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:46:22 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/23 23:59:09 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}

	RPN rpn;

	if (rpn.evaluate(argv[1]))
		return (0);
	else
		return (1);
}