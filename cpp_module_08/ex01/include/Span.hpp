/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:43:12 by alebarbo          #+#    #+#             */
/*   Updated: 2026/05/03 02:01:10 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class Span
{
	private:
		std::vector<int>	spanVector;
		unsigned int		max;

	public:
								Span();
								Span(const unsigned int max);
								Span(const Span &copy);
								~Span();
		Span					&operator=(const Span &copy);
		const unsigned int		&getMax() const;
		void					addNumber(const int n);
		long					shortestSpan();
		long					longestSpan();
		void					fillVector(const size_t &begin, const size_t &end);

		class SpanFull: public std::exception
		{
			const char			*what() const throw();
		};

		class TooFewElements: public std::exception
		{
			const char			*what() const throw();
		};
};

#endif