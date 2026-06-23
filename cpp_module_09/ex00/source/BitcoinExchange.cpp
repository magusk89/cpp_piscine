/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:07:18 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/23 23:37:48 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) : _database(copy._database) {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	if (this != &copy)
		_database = copy._database;
	return (*this);
}

bool BitcoinExchange::loadDatabase(const std::string &csvPath)
{
	std::ifstream file(csvPath.c_str());

	if (!file.is_open())
	{
		std::cerr << "Error: could not open database file: " << csvPath << std::endl;
		return (false);
	}

	std::string line;

	std::getline(file, line);
	while (std::getline(file, line))
	{
		if (line.empty())
			continue;

		size_t comma = line.find(',');

		if (comma == std::string::npos)
			continue;

		std::string date = line.substr(0, comma);
		std::string value = line.substr(comma + 1);
		char *end;
		double rate = std::strtod(value.c_str(), &end);

		if (end == value.c_str())
			continue;

		_database[date] = rate;
	}
	return (!_database.empty());
}

void BitcoinExchange::processInput(const std::string &inputPath) const
{
	std::ifstream file(inputPath.c_str());

	if (!file.is_open())
	{
		std::cerr << "Error: could not open input file: " << inputPath << std::endl;
		return;
	}

	std::string line;
	bool firstLine = true;

	while (std::getline(file, line))
	{
		if (firstLine)
		{
			firstLine = false;
			if (line == "date | value")
				continue;
		}
		processLine(line);
	}
}

bool BitcoinExchange::isValidDate(const std::string &date) const
{
	if (date.size() != 10)
		return (false);
	if (date[4] != '-' || date[7] != '-')
		return (false);
	for (size_t i = 0; i < 10; ++i)
	{
		if (i == 4 || i == 7)
			continue;
		if (date[i] < '0' || date[i] > '9')
			return (false);
	}

	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	return (month >= 1 && month <= 12 && day >= 1 && day <= 31);
}

bool BitcoinExchange::isValidValue(const std::string &valueStr, double &out) const
{
	if (valueStr.empty())
	{
		std::cerr << "Error: bad input => " << valueStr << std::endl;
		return (false);
	}

	char *end;
	out = std::strtod(valueStr.c_str(), &end);

	if (end == valueStr.c_str())
	{
		std::cerr << "Error: bad input => " << valueStr << std::endl;
		return (false);
	}
	if (out < 0.0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (out > 1000.0)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}

double BitcoinExchange::getRate(const std::string &date) const
{
	std::map<std::string, double>::const_iterator it = _database.lower_bound(date);

	if (it != _database.end() && it->first == date)
		return (it->second);
	if (it == _database.begin())
	{
		std::cerr << "Error: date out of range => " << date << std::endl;
		return (-1.0);
	}
	--it;
	return (it->second);
}

void BitcoinExchange::processLine(const std::string &line) const
{
	if (line.empty())
		return;

	size_t sep = line.find(" | ");

	if (sep == std::string::npos)
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}

	std::string date = line.substr(0, sep);
	std::string valueStr = line.substr(sep + 3);

	size_t last = valueStr.find_last_not_of(" \t\r\n");

	if (last != std::string::npos)
		valueStr = valueStr.substr(0, last + 1);
	if (!isValidDate(date))
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}

	double value;

	if (!isValidValue(valueStr, value))
		return;

	double rate = getRate(date);

	if (rate < 0.0)
		return;

	std::cout << date << " => " << value << " = " << value * rate << std::endl;
}
