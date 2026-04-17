/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 00:04:58 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/13 00:39:25 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# define DEBUG "\x1b[1;32mDEBUG:\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\x1b[0m"
# define INFO "\x1b[1;33mINFO:\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\x1b[0m"
# define WARNING "\x1b[1;35mWARNING:\nI think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\x1b[0m"
# define ERROR "\x1b[1;31mERROR:\nThis is unacceptable! I want to speak to the manager now.\x1b[0m"
# include <iostream>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		void	complain(std::string level);
};

#endif