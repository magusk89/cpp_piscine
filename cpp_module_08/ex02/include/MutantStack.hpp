/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 02:04:09 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/03 04:02:34 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
						MutantStack();
						MutantStack(const MutantStack &copy);
						~MutantStack();
		MutantStack		&operator=(const MutantStack &copy);

		typedef typename std::stack<T>::container_type		Container;
		typedef typename Container::iterator				iterator;
		typedef typename Container::reverse_iterator		reverse_iterator;

		iterator				begin();
		iterator				end();
		reverse_iterator		rbegin();
		reverse_iterator		rend();
};

# include <MutantStack.tpp>

#endif