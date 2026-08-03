/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 02:45:40 by alebarbo          #+#    #+#             */
/*   Updated: 2026/08/04 00:15:02 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void) copy;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	(void) copy;
	return (*this);
}

static void toInf(double conversion)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << conversion << "f" << std::endl;
	std::cout << "double: " << conversion << std::endl;
}

static void toChar(char conversion)
{
	std::cout << "char: ";
	if (conversion > 31 && conversion < 127)
		std::cout << "'" << conversion << "'" << std::endl;
	else
		std::cout << "character is not displayable." << std::endl;
	std::cout << "int: " << static_cast<int>(conversion) << std::endl;
	std::cout << "float: " << static_cast<float>(conversion) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(conversion) << std::endl;
}

static void toFloat(float conversion)
{
	std::cout << "char: ";
	if (static_cast<char>(conversion) > 31 && static_cast<char>(conversion) < 127)
		std::cout << "'" << static_cast<char>(conversion) << "'" << std::endl;
	else if (static_cast<long int>(conversion) < -128 || static_cast<long int>(conversion) > 127)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "character is not displayable." << std::endl;
	std::cout << "int: ";
	if (static_cast<long int>(conversion) > INT_MAX || static_cast<long int>(conversion) < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(conversion) << std::endl;
	std::cout << "float: " << conversion << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(conversion) << std::endl;
}

static void toDouble(double conversion)
{
	std::cout << "char: ";
	if (static_cast<char>(conversion) > 31 && static_cast<char>(conversion) < 127)
		std::cout << "'" << static_cast<char>(conversion) << "'" << std::endl;
	else if (static_cast<long int>(conversion) < -128 || static_cast<long int>(conversion) > 127)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "character is not displayable." << std::endl;
	std::cout << "int: ";
	if (static_cast<long int>(conversion) > INT_MAX || static_cast<long int>(conversion) < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(conversion) << std::endl;
	std::cout << "float: " << static_cast<float>(conversion) << "f" << std::endl;
	std::cout << "double: " << conversion << std::endl;
}

static void toInt(int conversion)
{
	std::cout << "char: ";
	if (static_cast<char>(conversion) > 31 && static_cast<char>(conversion) < 127)
		std::cout << "'" << static_cast<char>(conversion) << "'" << std::endl;
	else if (conversion < -128 || conversion > 127)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "character is not displayable." << std::endl;
	std::cout << "int: " << conversion << std::endl;
	std::cout << "float: " << std::fixed << static_cast<float>(conversion) << "f" << std::endl;
	std::cout << "double: " << std::fixed << static_cast<double>(conversion) << std::endl;
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
