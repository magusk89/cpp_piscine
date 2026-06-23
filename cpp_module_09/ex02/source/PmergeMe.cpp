/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 00:02:23 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/24 00:25:43 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &copy) : _vec(copy._vec), _deq(copy._deq) {}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	if (this != &copy)
	{
		_vec = copy._vec;
		_deq = copy._deq;
	}
	return (*this);
}

bool PmergeMe::parseInput(int argc, char **argv)
{
	for (size_t i = 1; i < argc; ++i)
	{
		char *end;
		long val = std::strtol(argv[i], &end, 10);

		if (*end != '\0' || val < 0 || val > INT_MAX)
		{
			std::cerr << "Error" << std::endl;
			return (false);
		}
		_vec.push_back(static_cast<int>(val));
		_deq.push_back(static_cast<int>(val));
	}
	return (true);
}

void PmergeMe::sortVector(std::vector<int> &seq)
{
}

void PmergeMe::sortDeque(std::deque<int> &seq)
{
}

void PmergeMe::run()
{
	std::cout << "Before: ";
	printVector(_vec);

	struct timespec ts_start;
	struct timespec ts_end;

	std::vector<int> vecCopy = _vec;
	clock_gettime(CLOCK_MONOTONIC, &ts_start);
	sortVector(vecCopy);
	clock_gettime(CLOCK_MONOTONIC, &ts_end);
	double vecTime = (ts_end.tv_sec - ts_start.tv_sec) * 1e6 + (ts_end.tv_nsec - ts_start.tv_nsec) * 1e-3;

	std::deque<int> deqCopy = _deq;
	clock_gettime(CLOCK_MONOTONIC, &ts_start);
	sortDeque(deqCopy);
	clock_gettime(CLOCK_MONOTONIC, &ts_end);
	double deqTime = (ts_end.tv_sec - ts_start.tv_sec) * 1e6 + (ts_end.tv_nsec - ts_start.tv_nsec) * 1e-3;

	std::cout << "After (vector): ";
	printVector(vecCopy);
	std::cout << "After (deque): ";
	printDeque(deqCopy);
	std::cout << std::endl;

	size_t vecCount = vecCopy.size();
	size_t deqCount = deqCopy.size();

	std::cout << "Time to process a range of " << vecCount << " elements with vector: " << vecTime << "μs" << std::endl;
	std::cout << "Time to process a range of " << deqCount << " elements with deque: " << deqTime << "μs" << std::endl;
}

int PmergeMe::jacobsthal(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	int a = 0;
	int b = 1;

	for (int i = 2; i <= n; ++i)
	{
		int c = b + 2 * a;
		a = b;
		b = c;
	}
	return (b);
}

void PmergeMe::printVector(const std::vector<int> &vec)
{
	for (size_t i = 0; i < vec.size(); ++i)
	{
		if (i)
			std::cout << " ";
		std::cout << vec[i];
	}
	std::cout << std::endl;
}

void PmergeMe::printDeque(const std::deque<int> &deq)
{
	for (size_t i = 0; i < deq.size(); ++i)
	{
		if (i)
			std::cout << " ";
		std::cout << deq[i];
	}
	std::cout << std::endl;
}
