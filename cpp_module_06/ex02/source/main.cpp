/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:05:25 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/02 14:23:25 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>
#include <cstdlib>

static Base *generate(void)
{
	srand(time(NULL));

	int		key = rand() % 3;
	if (!key)
		return (new A);
	else if (key == 1)
		return (new B);
	return (new C);
}

static void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "\'A\'" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "\'B\'" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "\'C\'" << std::endl;
}

static void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "\'A\'" << std::endl;
	}
	catch(const std::exception &e) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "\'B\'" << std::endl;
	}
	catch(const std::exception &e) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "\'C\'" << std::endl;
	}
	catch(const std::exception &e) {}
	
}

int main(void)
{
	Base	*p = generate();

	identify(p);
	identify(*p);
	delete p;
	return (0);
}