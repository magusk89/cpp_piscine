/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 02:29:41 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/28 02:41:21 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>

class ScalarConverter
{
	private:
							ScalarConverter();
							ScalarConverter(const ScalarConverter &copy);
							~ScalarConverter();
		ScalarConverter		&operator=(const ScalarConverter &copy);

	public:
		static void			convert(std::string literal);
};

#endif