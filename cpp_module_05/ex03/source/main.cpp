/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:29:46 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/28 02:18:41 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <Intern.hpp>

int main(void)
{
	Intern		poorguy = Intern();
	AForm		*twoB;
	AForm		*eightA;
	AForm		*specialNote;

	twoB = poorguy.makeForm("shrubbery creation", "patio");
	eightA = poorguy.makeForm("robotomy request", "Poorguy");
	specialNote = poorguy.makeForm("note from Walt Dangerfield", "Hoppy Harrington");
	std::cout << std::endl;

	std::cout << *twoB << std::endl;
	std::cout << *eightA << std::endl;
	
	delete twoB;
	delete eightA;
	delete specialNote;
	return 0;
}