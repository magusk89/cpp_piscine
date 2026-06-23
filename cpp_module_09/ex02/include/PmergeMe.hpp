/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 00:02:42 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/24 00:07:47 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <vector>
# include <deque>
# include <string>
# include <iostream>
# include <algorithm>
# include <ctime>
# include <cstdlib>
# include <climits>

class PmergeMe
{
	private:
		std::vector<int>	_vec;
		std::deque<int>		_deq;

	public:
					PmergeMe();
					PmergeMe(const PmergeMe& copy);
					~PmergeMe();
		PmergeMe&	operator=(const PmergeMe& copy);
		bool		parseInput(int argc, char** argv);
		void		sortVector(std::vector<int>& seq);
		void		sortDeque(std::deque<int>& seq);
		void		run();
		static int	jacobsthal(int n);
		static void	printVector(const std::vector<int>& vec);
		static void	printDeque(const std::deque<int>& deq);
};

#endif