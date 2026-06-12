/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:47:10 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/12 17:11:58 by alebarbo         ###   ########.fr       */
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
	: name(copy.name), isSigned(false), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute)
{
}

AForm::~AForm()
{
}

AForm &AForm::operator=(const AForm &copy)
{
	if (this != &copy)
	{
		const_cast<std::string&>(name) = copy.name;
		isSigned = false;
		const_cast<short int&>(gradeToSign) = copy.gradeToSign;
		const_cast<short int&>(gradeToExecute) = copy.gradeToExecute;
	}
	return (*this);
}

const std::string &AForm::getName() const
{
	return (name);
}

const bool &AForm::getIsSigned() const
{
	return (isSigned);
}

const short int &AForm::getGradeToSign() const
{
	return (gradeToSign);
}

const short int &AForm::getGradeToExecute() const
{
	return (gradeToExecute);
}

void AForm::setName(const std::string &name)
{
	const_cast<std::string&>(this->name) = name;
}

void AForm::setIsSigned(const bool &isSigned)
{
	this->isSigned = isSigned;
}

void AForm::setGradeToSign(const short int &gradeToSign)
{
	const_cast<short int&>(this->gradeToSign) = gradeToSign;
}

void AForm::setGradeToExecute(const short int &gradeToExecute)
{
	const_cast<short int&>(this->gradeToExecute) = gradeToExecute;
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
