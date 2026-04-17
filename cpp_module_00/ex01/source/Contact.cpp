/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 02:12:20 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/05 00:24:02 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

void Contact::set_index(unsigned int index)
{
	m_index = index;
}

void Contact::set_first_name(void)
{
	m_first_name = "";
	while (m_first_name.empty())
	{
		std::cout << "FIRST NAME: ";
		std::getline(std::cin, m_first_name);
		std::cin.clear();
	}
}

void Contact::set_last_name(void)
{
	m_last_name = "";
	while (m_last_name.empty())
	{
		std::cout << "LAST NAME: ";
		std::getline(std::cin, m_last_name);
		std::cin.clear();
	}
}

void Contact::set_nickname(void)
{
	m_nickname = "";
	while (m_nickname.empty())
	{
		std::cout << "NICKNAME: ";
		std::getline(std::cin, m_nickname);
		std::cin.clear();
	}
}

void Contact::set_phone_number(void)
{
	m_phone_number = "";
	while (m_phone_number.empty())
	{
		std::cout << "PHONE NUMBER: ";
		std::getline(std::cin, m_phone_number);
		std::cin.clear();
	}
}

void Contact::set_dark_secret(void)
{
	m_dark_secret = "";
	while (m_dark_secret.empty())
	{
		std::cout << "DARKEST SECRET: ";
		std::getline(std::cin, m_dark_secret);
		std::cin.clear();
	}
}

unsigned int Contact::get_index(void) const
{
	return (m_index);
}

std::string Contact::get_first_name(void) const
{
	return (m_first_name);
}

std::string Contact::get_last_name(void) const
{
	return (m_last_name);
}

std::string Contact::get_nickname(void) const
{
	return (m_nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (m_phone_number);
}

std::string Contact::get_dark_secret(void) const
{
	return (m_dark_secret);
}
