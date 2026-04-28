/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 23:43:08 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/28 01:41:14 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <AForm.hpp>
# include <ShrubberyCreationForm.hpp>
# include <RobotomyRequestForm.hpp>
# include <PresidentialPardonForm.hpp>

class AForm;

class Intern
{
	public:
				Intern();
				Intern(const Intern &copy);
				~Intern();
		Intern	&operator=(const Intern &copy);
		AForm	*makeForm(std::string form, std::string target);
		AForm	*makeShrubbery(std::string target);
		AForm	*makeRobotomy(std::string target);
		AForm	*makePresidential(std::string target);
		
		class FormDoesNotExist: public std::exception
		{
			public:
							FormDoesNotExist();
				const char	*what() const throw();
		};
};

#endif