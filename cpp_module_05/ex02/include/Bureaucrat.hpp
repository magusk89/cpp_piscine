/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 01:17:01 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/27 01:38:59 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include <AForm.hpp>

class AForm;

class Bureaucrat
{
	private:
		std::string			name;
		short int			grade;

	public:
							Bureaucrat();
							Bureaucrat(const std::string name, const short int grade);
							Bureaucrat(const Bureaucrat &copy);
		Bureaucrat			&operator=(const Bureaucrat &copy);
		const std::string	&getName() const;
		const short int		&getGrade() const;
		void				setName(const std::string &name);
		void				setGrade(const short int &grade);
		void				incrementGrade();
		void				decrementGrade();
		void				tryGrade(const short int &grade);
		void				signForm(AForm &form) const;

	class GradeTooHighException: public std::exception
	{
		private:
			short int			grade;
		public:
								GradeTooHighException(const short int grade);
			const char			*what() const throw();
			const short int		&getGrade();
	};

	class GradeTooLowException: public std::exception
	{
		private:
			short int			grade;
		public:
								GradeTooLowException(const short int grade);
			const char			*what() const throw();
			const short int		&getGrade();
	};
};

std::ostream	&operator<<(std::ostream &ostream, const Bureaucrat &bureaucrat);

#endif