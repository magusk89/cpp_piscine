/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 02:12:20 by alebarbo          #+#    #+#             */
/*   Updated: 2026/04/24 22:06:46 by alebarbo         ###   ########.fr       */
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
	std::cout << "FIRST NAME: ";
	while (m_first_name.empty())
	{
		if (!(std::getline(std::cin, m_first_name)))
			return ;
		if (m_first_name.empty())
			std::cout << "\x1b[1A\x1b[12C";
		std::cin.clear();
	}
}

void Contact::set_last_name(void)
{
	m_last_name = "";
	std::cout << "LAST NAME: ";
	while (m_last_name.empty())
	{
		if (!(std::getline(std::cin, m_last_name)))
			return ;
		if (m_last_name.empty())
			std::cout << "\x1b[1A\x1b[11C";
		std::cin.clear();
	}
}

void Contact::set_nickname(void)
{
	m_nickname = "";
	std::cout << "NICKNAME: ";
	while (m_nickname.empty())
	{
		if (!(std::getline(std::cin, m_nickname)))
			return ;
		if (m_nickname.empty())
			std::cout << "\x1b[1A\x1b[10C";
		std::cin.clear();
	}
}

void Contact::set_phone_number(void)
{
	m_phone_number = "";
	std::cout << "PHONE NUMBER: ";
	while (m_phone_number.empty())
	{
		if (!(std::getline(std::cin, m_phone_number)))
			return ;
		if (m_phone_number.empty())
			std::cout << "\x1b[1A\x1b[14C";
		std::cin.clear();
	}
}

void Contact::set_dark_secret(void)
{
	m_dark_secret = "";
	std::cout << "DARKEST SECRET: ";
	while (m_dark_secret.empty())
	{
		if (!(std::getline(std::cin, m_dark_secret)))
			return ;
		if (m_dark_secret.empty())
			std::cout << "\x1b[1A\x1b[16C";
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
