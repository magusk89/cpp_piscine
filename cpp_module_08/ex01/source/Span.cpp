/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 22:05:41 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/03 02:01:20 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span() : max(0)
{
}

Span::Span(const unsigned int max) : max(max)
{
}

Span::Span(const Span &copy) : spanVector(copy.spanVector), max(copy.max)
{
}

Span::~Span()
{
}

Span &Span::operator=(const Span &copy)
{
	if (&copy != this)
	{
		this->spanVector = copy.spanVector;
		this->max = copy.max;
	}
	return (*this);
}

const unsigned int &Span::getMax() const
{
	return (this->max);
}

void Span::addNumber(const int n)
{
	if (this->spanVector.size() == this->max)
		throw SpanFull();
	this->spanVector.push_back(n);
}

long Span::shortestSpan()
{
	if (spanVector.size() <= 1)
		throw TooFewElements();

	std::vector<int>	copy(this->spanVector);
	long				distance;
	
	std::sort(copy.begin(), copy.end());
	distance = copy[1] - copy[0];
	for (size_t i = 0; i < (copy.size() - 1); i++)
		if ((copy[i + 1] - copy[i]) < distance)
			distance = copy[i + 1] - copy[i];
	return (distance);
}

long Span::longestSpan()
{
	if (spanVector.size() <= 1)
		throw TooFewElements();
	
	std::vector<int>	copy(this->spanVector);

	std::sort(copy.begin(), copy.end());
	return (*(copy.end() - 1) - *copy.begin());
}

void Span::fillVector(const size_t &begin, const size_t &end)
{
	for (size_t i = begin; i < end; i++)
		this->addNumber(i);
}

const char *Span::SpanFull::what() const throw()
{
	return ("The span vector is full!");
}

const char *Span::TooFewElements::what() const throw()
{
	return ("The span vector has too few elements!");
}
