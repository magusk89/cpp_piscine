/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 22:36:10 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/05 00:24:06 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	unsigned int	m_index;
	std::string		m_first_name;
	std::string		m_last_name;
	std::string		m_nickname;
	std::string		m_phone_number;
	std::string		m_dark_secret;

	public:
	void			set_index(unsigned int index);
	void			set_first_name(void);
	void			set_last_name(void);
	void			set_nickname(void);
	void			set_phone_number(void);
	void			set_dark_secret(void);
	unsigned int	get_index(void) const;
	std::string		get_first_name(void) const;
	std::string		get_last_name(void) const;
	std::string		get_nickname(void) const;
	std::string		get_phone_number(void) const;
	std::string		get_dark_secret(void) const;
};

#endif