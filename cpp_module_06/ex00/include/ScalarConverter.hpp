/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 02:29:41 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/01 23:27:45 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <cmath>
# include <climits>

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