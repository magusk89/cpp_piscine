/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 22:28:42 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/27 22:32:46 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <AForm.hpp>
# include <Bureaucrat.hpp>
# include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm: public AForm
{
	private:
		const std::string		target;

	public:
								RobotomyRequestForm();
								RobotomyRequestForm(const std::string &target);
								RobotomyRequestForm(const RobotomyRequestForm &copy);
								~RobotomyRequestForm();
		RobotomyRequestForm		&operator=(const RobotomyRequestForm &copy);
		const std::string		&getTarget() const;
		void					execute(Bureaucrat const &executor) const;
};

#endif