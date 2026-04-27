/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:46:16 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/27 01:47:25 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include <Bureaucrat.hpp>

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				isSigned;
		const short int		gradeToSign;
		const short int		gradeToExecute;

	public:
							AForm();
							AForm(const std::string &name, const short int &gradeToSign, const short int &gradeToExecute);
							AForm(const AForm &copy);
		virtual				~AForm();
		AForm				&operator=(const AForm &copy);
		const std::string	&getName() const;
		const bool			&getIsSigned() const;
		const short int		&getGradeToSign() const;
		const short int		&getGradeToExecute() const;
		void				beSigned(const Bureaucrat &bureaucrat);
		void				tryGrade(const short int &grade);
		virtual void		execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException: public std::exception
	{
		public:
								GradeTooHighException();
			const char			*what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
		public:
								GradeTooLowException();
			const char			*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &ostream, const AForm &form);

#endif