/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:29:46 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/25 14:40:44 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

int main(void)
{
	Bureaucrat	a;
	Bureaucrat	b("b", 1);

	a.decrementGrade();
	std::cout << std::endl;
	b.incrementGrade();
	std::cout << std::endl;

	a.incrementGrade();
	std::cout << "Bureaucrat " << a.getName() << " was promoted to a higher grade: " << a.getGrade() << std::endl;
	std::cout << std::endl;

	b.decrementGrade();
	std::cout << "Bureaucrat " << b.getName() << " was demoted to a lower grade: " << b.getGrade() << std::endl;
	std::cout << std::endl;

	return 0;
}