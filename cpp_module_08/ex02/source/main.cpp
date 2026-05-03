/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 03:47:19 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/03 04:21:51 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>
#include <list>

int main()
{
	std::cout << "!!MutantStack tests!!" << std::endl;
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl;
	MutantStack<int>::reverse_iterator ti = mstack.rend();
	MutantStack<int>::reverse_iterator eti = mstack.rbegin();

	--ti;
	--eti;
	while (ti != eti)
	{
		std::cout << *ti << std::endl;
		--ti;
	}
	std::cout << std::endl;

	std::cout << "!!List tests!!" << std::endl;
	std::list<int>	mlist;

	mlist.push_front(5);
	mlist.push_front(17);

	std::cout << mlist.front() << std::endl;

	mlist.pop_front();

	std::cout << mlist.size() << std::endl;

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::list<int>::iterator iter = mlist.begin();
	std::list<int>::iterator itera = mlist.end();

	while (iter != itera)
	{
		std::cout << *iter << std::endl;
		++iter;
	}

	std::cout << std::endl;
	std::list<int>::reverse_iterator reti = mlist.rend();
	std::list<int>::reverse_iterator areti = mlist.rbegin();

	--reti;
	--areti;
	while (reti != areti)
	{
		std::cout << *reti << std::endl;
		--reti;
	}
	return 0;
}