/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:29:46 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/27 01:23:00 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Form.hpp>

int main(void)
{
	Bureaucrat	john("John", 7);
	Bureaucrat	greg("Greg", 98);
	Form		oneA("1a", 15, 5);
	Form		sevenK("7k", 140, 100);
	Form		nineP("9p", 3, 1);

	std::cout << john << std::endl;
	std::cout << greg << std::endl;

	std::cout << oneA << std::endl;
	std::cout << sevenK << std::endl;
	std::cout << nineP << std::endl;

	greg.signForm(oneA);
	greg.signForm(sevenK);
	greg.signForm(nineP);
	std::cout << std::endl;

	std::cout << oneA << std::endl;
	std::cout << sevenK << std::endl;
	std::cout << nineP << std::endl;

	john.signForm(oneA);
	john.signForm(sevenK);
	john.signForm(nineP);
	std::cout << std::endl;

	std::cout << oneA << std::endl;
	std::cout << sevenK << std::endl;
	std::cout << nineP << std::endl;

	return 0;
}