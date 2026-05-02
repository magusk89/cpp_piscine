/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 23:44:41 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 17:08:41 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &copy)
{
	(void) copy;
	return (*this);
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	std::string		forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm			*(Intern::*make[3])(std::string) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};
	int				i = 0;

	try
	{
		while (i < 4 && forms[i].compare(form))
			i++;
		if (i < 3)
		{
			std::cout << "Intern creates " << forms[i] << "." << std::endl;
			return ((this->*make[i])(target));
		}
		else
			throw FormDoesNotExist();
	}
	catch (FormDoesNotExist &e)
	{
		std::cerr << e.what() << std::endl;
		return (NULL);
	}
}

AForm *Intern::makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::makePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Intern::FormDoesNotExist::FormDoesNotExist()
{
}

const char *Intern::FormDoesNotExist::what() const throw()
{
	return ("Form does not exist!");
}
