/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 00:02:23 by alebarbo          #+#    #+#             */
/*   Updated: 2026/06/24 01:00:05 by alebarbo         ###   ########.fr       */
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
	for (int i = 1; i < argc; ++i)
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
	int n = static_cast<int>(seq.size());

	if (n <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;

	for (int i = 0; i + 1 < n; i += 2)
	{
		int a = seq[i];
		int b = seq[i + 1];

		if (a < b)
			std::swap(a, b);
		pairs.push_back(std::make_pair(a, b));
	}

	bool hasStraggler = (n % 2 == 1);
	int straggler = 0;

	if (hasStraggler)
		straggler = seq[n - 1];
	
	std::vector<int> mainChain;
	std::vector<int> pend;

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		mainChain.push_back(pairs[i].first);
		pend.push_back(pairs[i].second);
	}
	sortVector(mainChain);
	std::sort(pairs.begin(), pairs.end());
	pend.clear();
	for (size_t i = 0; i < pairs.size(); ++i)
		pend.push_back(pairs[i].second);
	mainChain.insert(mainChain.begin(), pend[0]);

	int pendSize = static_cast<int>(pend.size());
	std::vector<bool> inserted(pendSize, false);

	inserted[0] = true;
	for (int k = 2;;++k)
	{
		int jk = jacobsthal(k);
		int jk_prev = jacobsthal(k - 1);
		int high = jk - 1;
		int low = jk_prev;

		if (low >= pendSize)
			break;
		if (high >= pendSize)
			high = pendSize - 1;
		for (int idx = high; idx >= low; --idx)
		{
			if (inserted[idx])
				continue;

			int pairedLarge = pairs[idx].first;
			std::vector<int>::iterator bound = std::upper_bound(mainChain.begin(), mainChain.end(), pairedLarge);
			std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), bound, pend[idx]);

			mainChain.insert(pos, pend[idx]);
			inserted[idx] = true;
		}
	}
	if (hasStraggler)
	{
		std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), straggler);

		mainChain.insert(pos, straggler);
	}
	seq = mainChain;
}

void PmergeMe::sortDeque(std::deque<int> &seq)
{
	int n = static_cast<int>(seq.size());

	if (n <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;

	for (int i = 0; i + 1 < n; i += 2)
	{
		int a = seq[i];
		int b = seq[i + 1];

		if (a < b)
			std::swap(a, b);
		pairs.push_back(std::make_pair(a, b));
	}

	bool hasStraggler = (n % 2 == 1);
	int straggler = 0;

	if (hasStraggler)
		straggler = seq[n - 1];
	
	std::deque<int> mainChain;

	for (size_t i = 0; i < pairs.size(); ++i)
		mainChain.push_back(pairs[i].first);
	sortDeque(mainChain);
	std::sort(pairs.begin(), pairs.end());

	std::deque<int> pend;

	for (size_t i = 0; i < pairs.size(); ++i)
		pend.push_back(pairs[i].second);
	mainChain.push_front(pend[0]);

	int pendSize = static_cast<int>(pend.size());
	std::vector<bool> inserted(pendSize, false);

	inserted[0] = true;
	for (int k = 2;;++k)
	{
		int jk = jacobsthal(k);
		int jk_prev = jacobsthal(k - 1);
		int high = jk - 1;
		int low = jk_prev;

		if (low >= pendSize)
			break;
		if (high >= pendSize)
			high = pendSize - 1;
		for (int idx = high; idx >= low; --idx)
		{
			if (inserted[idx])
				continue;

			int pairedLarge = pairs[idx].first;
			std::deque<int>::iterator bound = std::upper_bound(mainChain.begin(), mainChain.end(), pairedLarge);
			std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), bound, pend[idx]);

			mainChain.insert(pos, pend[idx]);
			inserted[idx] = true;
		}
	}
	if (hasStraggler)
	{
		std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), straggler);

		mainChain.insert(pos, straggler);
	}
	seq = mainChain;
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
