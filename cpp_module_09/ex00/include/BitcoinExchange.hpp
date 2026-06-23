/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:09:18 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/23 23:39:57 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <fstream>
# include <iostream>
# include <sstream>
# include <cstdlib>
# define DATABASE "data.csv"

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_database;

	public:
							BitcoinExchange();
							BitcoinExchange(const BitcoinExchange& copy);
							~BitcoinExchange();
		BitcoinExchange&	operator=(const BitcoinExchange& copy);
		bool				loadDatabase(const std::string& csvPath);
		void				processInput(const std::string& inputPath) const;
		bool				isValidDate(const std::string& date) const;
		bool				isValidValue(const std::string& valueStr, double& out) const;
		double				getRate(const std::string& date) const;
		void				processLine(const std::string& line) const;
};

#endif