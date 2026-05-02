/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 22:36:03 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/27 22:41:31 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5), target("undefined")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
	: AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()), target(copy.getTarget())
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	(void) copy;
	return (*this);
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (!this->getIsSigned())
			throw FormNotSigned();
		if (executor.getGrade() > this->getGradeToExecute())
			throw GradeTooLowException();
		executor.executeForm(*this);
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
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