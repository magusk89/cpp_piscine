/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:46:39 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/23 23:57:32 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

RPN::RPN() {}

RPN::RPN(const RPN &copy) : _stack(copy._stack) {}

RPN::~RPN() {}

RPN &RPN::operator=(const RPN &copy)
{
	if (this != &copy)
		_stack = copy._stack;
	return (*this);
}

bool RPN::applyOperator(char op)
{
	if (_stack.size() < 2)
		return (false);

	int b = _stack.top();

	_stack.pop();

	int a = _stack.top();

	_stack.pop();

	int result;

	switch (op)
	{
		case '+':
		{
			result = a + b;
			break;
		}
		case '-':
		{
			result = a - b;
			break;
		}
		case '*':
		{
			result = a * b;
			break;
		}
		case '/':
		{
			if (b == 0)
				return (false);
			result = a / b;
			break;
		}
		default:
			return (false);
	}
	_stack.push(result);
	return (true);
}

bool RPN::evaluate(const std::string &expression)
{
	while (!_stack.empty())
		_stack.pop();

	std::istringstream iss(expression);
	std::string token;

	while (iss >> token)
	{
		if (token.size() == 1 && token[0] >= '0' && token[0] <= '9')
			_stack.push(token[0] - '0');
		else if (token.size() == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/'))
		{
			if (!applyOperator(token[0]))
			{
				std::cerr << "Error" << std::endl;
				return (false);
			}
		}
		else
		{
			std::cerr << "Error" << std::endl;
			return (false);
		}
	}
	if (_stack.size() != 1)
	{
		std::cerr << "Error" << std::endl;
		return (false);
	}
	std::cout << _stack.top() << std::endl;
	return (true);
}
