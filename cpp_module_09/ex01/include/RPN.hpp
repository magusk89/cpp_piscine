/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:46:56 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/23 23:49:28 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <stack>
# include <string>
# include <iostream>
# include <sstream>

class RPN
{
	private:
		std::stack<int>	_stack;

	public:
				RPN();
				RPN(const RPN& copy);
				~RPN();
		RPN&	operator=(const RPN& copy);
		bool	applyOperator(char op);
		bool	evaluate(const std::string& expression);
};

#endif