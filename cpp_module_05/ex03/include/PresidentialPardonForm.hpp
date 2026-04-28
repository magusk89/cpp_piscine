/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 22:28:42 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/27 22:48:21 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <AForm.hpp>
# include <Bureaucrat.hpp>

class Bureaucrat;

class PresidentialPardonForm: public AForm
{
	private:
		const std::string		target;

	public:
								PresidentialPardonForm();
								PresidentialPardonForm(const std::string &target);
								PresidentialPardonForm(const PresidentialPardonForm &copy);
								~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &copy);
		const std::string		&getTarget() const;
		void					execute(Bureaucrat const &executor) const;
};

#endif