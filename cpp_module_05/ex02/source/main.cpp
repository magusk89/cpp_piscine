/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:29:46 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/27 23:37:02 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int main(void)
{
	Bureaucrat	john("John", 7);
	Bureaucrat	greg("Greg", 140);
	Bureaucrat	topguy("Topguy", 1);
	AForm		*oneA = new ShrubberyCreationForm("Garden");
	AForm		*sevenK = new RobotomyRequestForm("Jerry");
	AForm		*nineP = new PresidentialPardonForm("Tom");

	std::cout << john << std::endl;
	std::cout << greg << std::endl;
	std::cout << topguy << std::endl;

	std::cout << *oneA << std::endl;
	std::cout << *sevenK << std::endl;
	std::cout << *nineP << std::endl;

	topguy.signForm(*oneA);
	topguy.signForm(*sevenK);
	topguy.signForm(*nineP);
	std::cout << std::endl;

	std::cout << *oneA << std::endl;
	std::cout << *sevenK << std::endl;
	std::cout << *nineP << std::endl;

	oneA->execute(greg);
	sevenK->execute(greg);
	nineP->execute(greg);
	std::cout << std::endl;

	oneA->execute(john);
	sevenK->execute(john);
	nineP->execute(john);
	std::cout << std::endl;

	oneA->execute(topguy);
	sevenK->execute(topguy);
	nineP->execute(topguy);
	std::cout << std::endl;

	delete oneA;
	delete sevenK;
	delete nineP;
	return 0;
}