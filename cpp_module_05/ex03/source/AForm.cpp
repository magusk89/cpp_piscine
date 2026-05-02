/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:47:10 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 17:07:45 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

AForm::AForm() : name("unnamed"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
}

AForm::AForm(const std::string &name, const short int &gradeToSign, const short int &gradeToExecute)
	: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	tryGrade(gradeToSign);
	tryGrade(gradeToExecute);
}

AForm::AForm(const AForm &copy)
	: name(copy.getName()), isSigned(false), gradeToSign(copy.getGradeToSign()), gradeToExecute(copy.getGradeToExecute())
{
}

AForm::~AForm()
{
}

AForm &AForm::operator=(const AForm &copy)
{
	(void) copy;
	return (*this);
}

const std::string &AForm::getName() const
{
	return (this->name);
}

const bool &AForm::getIsSigned() const
{
	return (this->isSigned);
}

const short int &AForm::getGradeToSign() const
{
	return (this->gradeToSign);
}

const short int &AForm::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > this->getGradeToSign())
			throw GradeTooLowException();
		this->isSigned = true;
	}
	catch (GradeTooLowException &e)
	{
		std::cerr << bureaucrat.getName() << " can't sign form " << this->getName() << ". " << e.what() << std::endl;
	}
}

void AForm::tryGrade(const short int &grade)
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
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}

AForm::GradeTooHighException::GradeTooHighException(void)
{
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

AForm::GradeTooLowException::GradeTooLowException(void)
{
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

AForm::FormNotSigned::FormNotSigned(void)
{
}

const char *AForm::FormNotSigned::what() const throw()
{
	return ("Form not signed!");
}

std::ostream &operator<<(std::ostream &ostream, const AForm &form)
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
