/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:16:06 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/20 17:42:42 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>
# include <iostream>
# include <numeric>

class Span
{
private:
	unsigned int _N;
	unsigned int _nb;
	std::vector<int> _ints;

	Span(void);

public:
	Span(unsigned int const N);
	Span(Span const & s);
	Span & operator=(Span const & s);
	~Span();

	void addNumber(int const n);
	void addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
	int shortestSpan(void) const;
	int longestSpan(void) const;
	std::vector<int> getInts(void) const;
	unsigned int getNb(void) const;

	// exceptions
	class spanIsFull : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
					return ("Error : span is full");
			}
	};

	class notEnoughInts : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
					return ("Error : not enough ints in span");
			}
	};
};

std::ostream	&operator<<(std::ostream &o, const Span &s);


#endif