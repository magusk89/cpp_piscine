/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:47:10 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/27 01:23:39 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form() : name("unnamed"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
}

Form::Form(const std::string &name, const short int &gradeToSign, const short int &gradeToExecute)
	: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	tryGrade(gradeToSign);
	tryGrade(gradeToExecute);
}

Form::Form(const Form &copy)
	: name(copy.getName()), isSigned(false), gradeToSign(copy.getGradeToSign()), gradeToExecute(copy.getGradeToExecute())
{
}

Form::~Form()
{
}

Form &Form::operator=(const Form &copy)
{
	(void) copy;
	return (*this);
}

const std::string &Form::getName() const
{
	return (this->name);
}

const bool &Form::getIsSigned() const
{
	return (this->isSigned);
}

const short int &Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

const short int &Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > this->getGradeToSign())
			throw GradeTooLowException();
		this->isSigned = true;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << bureaucrat.getName() << " can't sign form " << this->getName() << ". " << e.what() << std::endl;
	}
}

void Form::tryGrade(const short int &grade)
{
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		if (grade < 1)
			throw GradeTooHighException();
	}
	catch (GradeTooHighException &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

Form::GradeTooHighException::GradeTooHighException(void)
{
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

Form::GradeTooLowException::GradeTooLowException(void)
{
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream &operator<<(std::ostream &ostream, const Form &form)
{
	ostream << "Form: " << form.getName() << std::endl;
	ostream << "Signed: ";
	if (form.getIsSigned())
		ostream << "yes" << std::endl;
	else
		ostream << "no" << std::endl;
	ostream << "Grade to sign: " << form.getGradeToSign() << std::endl;
	ostream << "Grade to execute: " << form.getGradeToExecute() << std::endl;
	return (ostream);
}
