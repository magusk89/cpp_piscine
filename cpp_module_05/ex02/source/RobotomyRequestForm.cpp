/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 22:36:03 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/27 22:41:31 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), target("undefined")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
	: AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()), target(copy.getTarget())
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	(void) copy;
	return (*this);
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (!this->getIsSigned())
			throw FormNotSigned();
		if (executor.getGrade() > this->getGradeToExecute())
			throw GradeTooLowException();
		executor.executeForm(*this);
		std::cout << "** DRILLING NOISES **" << std::endl;
		if (rand() % 2)
			std::cout << this->getTarget() << " has been robotomized!" << std::endl;
		else
			std::cout << this->getTarget() << " robotomization failed!" << std::endl;
	}
	catch(FormNotSigned &e)
	{
		std::cerr << "Bureaucrat " << executor.getName() << " can't execute form " << this->getName() << ". " << e.what() << std::endl;
	}
	catch(GradeTooLowException &e)
	{
		std::cerr << "Bureaucrat " << executor.getName() << " can't execute form " << this->getName() << ". " << e.what() << std::endl;
	}
}
