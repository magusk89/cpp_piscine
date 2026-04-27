/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 22:36:03 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/27 23:37:34 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137), target("undefined")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
	: AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()), target(copy.getTarget())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	(void) copy;
	return (*this);
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

ShrubberyCreationForm::FileNotOpen::FileNotOpen()
{
}

const char *ShrubberyCreationForm::FileNotOpen::what() const throw()
{
	return ("File creation failed!");
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::fstream	output;

	try
	{
		if (!this->getIsSigned())
			throw FormNotSigned();
		if (executor.getGrade() > this->getGradeToExecute())
			throw GradeTooLowException();
		executor.executeForm(*this);
		output.open((this->getTarget() + "_shrubbery").c_str(), std::ios::out);
		if (!output)
			throw FileNotOpen();
		output << "      *           *           *           *" << std::endl;
		output << "     ***         ***         ***         ***" << std::endl;
		output << "    *****       *****       *****       *****" << std::endl;
		output << "   *******     *******     *******     *******" << std::endl;
		output << "  *********   *********   *********   *********" << std::endl;
		output << " *********** *********** *********** ***********" << std::endl;
		output << "      |           |           |           |" << std::endl;
		output.close();
	}
	catch(FormNotSigned &e)
	{
		std::cout << "Bureaucrat " << executor.getName() << " can't execute form " << this->getName() << ". " << e.what() << std::endl;
	}
	catch(GradeTooLowException &e)
	{
		std::cout << "Bureaucrat " << executor.getName() << " can't execute form " << this->getName() << ". " << e.what() << std::endl;
	}
	catch(FileNotOpen &e)
	{
		std::cout << e.what() << std::endl;
	}
}
