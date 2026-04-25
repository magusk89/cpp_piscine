/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 01:27:00 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/25 14:37:11 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat() : name("unnamed"), grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, const short int grade) : name(name)
{
	tryGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	this->setName(copy.getName());
	this->setGrade(copy.getGrade());
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (&copy != this)
	{
		this->setName(copy.getName());
		this->setGrade(copy.getGrade());
	}
	return (*this);
}

const std::string &Bureaucrat::getName() const
{
	return (this->name);
}

const short int &Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::setName(const std::string &name)
{
	this->name = name;
}

void Bureaucrat::setGrade(const short int &grade)
{
	this->grade = grade;
}

void Bureaucrat::incrementGrade()
{
	short int	grade = this->getGrade() - 1;

	tryGrade(grade);
}

void Bureaucrat::decrementGrade()
{
	short int	grade = this->getGrade() + 1;

	tryGrade(grade);
}

void Bureaucrat::tryGrade(const short int &grade)
{
	try
	{
		if (grade > 150)
			throw GradeTooLowException(grade);
		if (grade < 1)
			throw GradeTooHighException(grade);
		this->setGrade(grade);
	}
	catch (GradeTooHighException &e)
	{
		std::cout << "Exception caught: " << e.what() << " New grade: " << e.getGrade() << std::endl;
		std::cout << "Bureaucrat " << this->getName() << " already has the maximum grade: " << this->getGrade() << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << "Exception caught: " << e.what() << " New grade: " << e.getGrade() << std::endl;
		std::cout << "Bureaucrat " << this->getName() << " already has the minimum grade: " << this->getGrade() << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const short int grade) : grade(grade)
{
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const short int &Bureaucrat::GradeTooHighException::getGrade()
{
	return (this->grade);
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const short int grade) : grade(grade)
{
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const short int &Bureaucrat::GradeTooLowException::getGrade()
{
	return (this->grade);
}
