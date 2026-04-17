/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 22:30:55 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/03 00:24:22 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

void PhoneBook::zero_indexes(void)
{
	m_current_index = 0;
	for (int i = 0; i < 8; i++)
		m_contacts[i].set_index(0);
}

void PhoneBook::display_list(void)
{
	std::cout << ERS_SCR << LIST_HEADER << std::endl;
	for (int i = 0; m_contacts[i].get_index() && i < 8; i++)
	{
		std::cout << "|" << std::right << std::setfill(' ') << std::setw(10) << m_contacts[i].get_index() << "|";
		if (m_contacts[i].get_first_name().length() > 10)
			std::cout << m_contacts[i].get_first_name().substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setfill(' ') << std::setw(10) << m_contacts[i].get_first_name() << "|";
		if (m_contacts[i].get_last_name().length() > 10)
			std::cout << m_contacts[i].get_last_name().substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setfill(' ') << std::setw(10) << m_contacts[i].get_last_name() << "|";
		if (m_contacts[i].get_nickname().length() > 10)
			std::cout << m_contacts[i].get_nickname().substr(0, 9) << ".|" << std::endl;
		else
			std::cout << std::right << std::setfill(' ') << std::setw(10) << m_contacts[i].get_nickname() << "|" << std::endl;
	}
	std::cout << std::endl << std::endl;
}

void PhoneBook::display_contact(unsigned int index)
{
	std::cout << ERS_SCR;
	std::cout << "FIRST NAME: " << m_contacts[index].get_first_name() << std::endl;
	std::cout << "LAST NAME: " << m_contacts[index].get_last_name() << std::endl;
	std::cout << "NICKNAME: " << m_contacts[index].get_nickname() << std::endl;
	std::cout << "PHONE NUMBER: " << m_contacts[index].get_phone_number() << std::endl;
	std::cout << "DARKEST SECRET: " << m_contacts[index].get_dark_secret() << std::endl;
	std::cin.get();
}

void PhoneBook::add(void)
{
	std::cout << ERS_SCR << "ENTER NEW CONTACT INFO" << std::endl;
	if (m_current_index > 7)
		m_current_index = 0;
	m_contacts[m_current_index].set_index(m_current_index + 1);
	m_contacts[m_current_index].set_first_name();
	m_contacts[m_current_index].set_last_name();
	m_contacts[m_current_index].set_nickname();
	m_contacts[m_current_index].set_phone_number();
	m_contacts[m_current_index].set_dark_secret();
	m_current_index++;
	std::cout << "NEW CONTACT ADDED TO THE PHONEBOOK" << std::endl;
	std::cin.get();
}

void PhoneBook::search(void)
{
	unsigned int	index = 0;

	while (index < 1 || index > 8)
	{
		index = 0;
		display_list();
		std::cout << DFL_IPT;
		std::cin >> index;
		std::cin.clear();
		std::cin.ignore();
	}
	display_contact(index - 1);
}

void PhoneBook::exit(void)
{
	std::cout << ERS_SCR;
	std::exit(0);
}
