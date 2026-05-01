/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 02:45:40 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 00:57:33 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

static void toInf(double convertion)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << convertion << "f" << std::endl;
	std::cout << "double: " << convertion << std::endl;
}

static void toChar(char convertion)
{
	std::cout << "char: ";
	if (convertion > 31 && convertion < 127)
		std::cout << "'" << convertion << "'" << std::endl;
	else
		std::cout << "character is not displayable." << std::endl;
	std::cout << "int: " << static_cast<int>(convertion) << std::endl;
	std::cout << "float: " << static_cast<float>(convertion) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(convertion) << std::endl;
}

static void toFloat(float convertion)
{
	std::cout << "char: ";
	if (static_cast<char>(convertion) > 31 && static_cast<char>(convertion) < 127)
		std::cout << "'" << static_cast<char>(convertion) << "'" << std::endl;
	else if (static_cast<long int>(convertion) < -128 || static_cast<long int>(convertion) > 127)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "character is not displayable." << std::endl;
	std::cout << "int: ";
	if (static_cast<long int>(convertion) > INT_MAX || static_cast<long int>(convertion) < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(convertion) << std::endl;
	std::cout << "float: " << convertion << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(convertion) << std::endl;
}

static void toDouble(double convertion)
{
	std::cout << "char: ";
	if (static_cast<char>(convertion) > 31 && static_cast<char>(convertion) < 127)
		std::cout << "'" << static_cast<char>(convertion) << "'" << std::endl;
	else if (static_cast<long int>(convertion) < -128 || static_cast<long int>(convertion) > 127)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "character is not displayable." << std::endl;
	std::cout << "int: ";
	if (static_cast<long int>(convertion) > INT_MAX || static_cast<long int>(convertion) < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(convertion) << std::endl;
	std::cout << "float: " << static_cast<float>(convertion) << "f" << std::endl;
	std::cout << "double: " << convertion << std::endl;
}

static void toInt(int convertion)
{
	std::cout << "char: ";
	if (static_cast<char>(convertion) > 31 && static_cast<char>(convertion) < 127)
		std::cout << "'" << static_cast<char>(convertion) << "'" << std::endl;
	else if (convertion < -128 || convertion > 127)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "character is not displayable." << std::endl;
	std::cout << "int: " << convertion << std::endl;
	std::cout << "float: " << std::fixed << static_cast<float>(convertion) << "f" << std::endl;
	std::cout << "double: " << std::fixed << static_cast<double>(convertion) << std::endl;
}

static void toNan(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void ScalarConverter::convert(std::string literal)
{
	char		*endptr;

	if (!literal.compare("inf") || !literal.compare("+inf") || !literal.compare("-inf")
		|| !literal.compare("inff") || !literal.compare("+inff") || !literal.compare("-inff"))
	{
		toInf(std::strtod(literal.c_str(), NULL));
	}
	else if (literal.length() == 3 && literal.c_str()[0] == '\''
			&& literal.c_str()[2] == '\'' && literal.c_str()[3] == '\0')
	{
		toChar(literal.c_str()[1]);
	}
	else if (literal.find_first_of('.') != 0 && literal.find_first_of('.') != std::string::npos
			&& literal.find_first_of('.') == literal.find_last_of('.') && std::strtod(literal.c_str(), &endptr) != HUGE_VAL)
	{
		if (*endptr == 'f' && !*(endptr + 1))
		{
			toFloat(std::strtof(literal.c_str(), NULL));
		}
		else if (!*endptr && std::strtod(literal.c_str(), NULL))
		{
			toDouble(std::strtod(literal.c_str(), NULL));
		}
		else
		{
			toNan();
		}
	}
	else if (std::strtol(literal.c_str(), &endptr, 10) <= INT_MAX && std::strtol(literal.c_str(), &endptr, 10) >= INT_MIN && !*endptr)
	{
		toInt(std::strtol(literal.c_str(), NULL, 10));
	}
	else
	{
		toNan();
	}
	
}
