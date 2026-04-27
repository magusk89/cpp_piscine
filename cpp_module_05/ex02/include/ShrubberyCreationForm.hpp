/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 22:28:42 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/27 23:21:26 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <AForm.hpp>
# include <Bureaucrat.hpp>
# include <fstream>

class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
	private:
		const std::string		target;

	public:
								ShrubberyCreationForm();
								ShrubberyCreationForm(const std::string &target);
								ShrubberyCreationForm(const ShrubberyCreationForm &copy);
								~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &copy);
		const std::string		&getTarget() const;
		void					execute(Bureaucrat const &executor) const;

		class FileNotOpen: public std::exception
		{
			public:
								FileNotOpen();
				const char		*what() const throw();
		};
};

#endif