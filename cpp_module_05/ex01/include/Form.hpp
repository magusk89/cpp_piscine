/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:46:16 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/27 01:06:51 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include <Bureaucrat.hpp>

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const short int		gradeToSign;
		const short int		gradeToExecute;

	public:
							Form();
							Form(const std::string &name, const short int &gradeToSign, const short int &gradeToExecute);
							Form(const Form &copy);
							~Form();
		Form				&operator=(const Form &copy);
		const std::string	&getName() const;
		const bool			&getIsSigned() const;
		const short int		&getGradeToSign() const;
		const short int		&getGradeToExecute() const;
		void				beSigned(const Bureaucrat &bureaucrat);
		void				tryGrade(const short int &grade);

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

std::ostream	&operator<<(std::ostream &ostream, const Form &form);

#endif