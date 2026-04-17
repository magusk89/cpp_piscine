/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 22:35:57 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/03 00:24:27 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define ERS_SCR "\x1B[2J\x1B[H"
# define LIST_HEADER "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|"
# define DFL_IPT "ENTER A VALID CONTACT INDEX: "
# include <Contact.hpp>
# include <cstdlib>

class PhoneBook
{
	unsigned int	m_current_index;
	Contact			m_contacts[8];

	public:
	void			zero_indexes(void);
	void			display_list(void);
	void			display_contact(unsigned int index);
	void			add(void);
	void			search(void);
	void			exit(void);
};

#endif