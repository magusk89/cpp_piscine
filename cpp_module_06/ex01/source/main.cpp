/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 02:42:16 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 02:49:45 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		std::cout << "Usage: \"./serial <data_type> <data_value>\"" << std::endl;
		return (1);
	}

	std::string		dataType = argv[1];
	std::string		dataValue = argv[2];
	if (dataType.empty() || dataValue.empty())
		return (1);

	Data		data = {dataType, dataValue};
	uintptr_t	serial = Serializer::serialize(&data);

	std::cout << "Seralized data: " << serial << std::endl;

	data = *Serializer::deserialize(serial);

	std::cout << "Deserialized data {type: " << data.type << ", value: " << data.value << "}" << std::endl;
	return (0);
}