/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:16:16 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/09/15 10:26:40 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0), _nb(0)
{
	return ;
}

Span::Span(unsigned int const N) : _N(N), _nb(0)
{
	return ;
}

Span::Span(Span const & s)
{
	*this = s;
}

Span & Span::operator=(Span const & s)
{
	if (this != &s)
	{
		_N = s._N;
		_nb = s._nb;
		_ints.clear();
		_ints = s._ints;
	}
	
	return *this;
}

Span::~Span()
{
	return ;
}

void Span::addNumber(int const n)
{
	if (_nb >= _N)
		throw spanIsFull();
	_ints.push_back(n);
	_nb++;
}

int Span::shortestSpan(void) const
{
	if (_nb <= 1)
		throw notEnoughInts();

	std::vector<int>	intsCopy = _ints;
		
    std::sort(intsCopy.begin(), intsCopy.end());
		
    std::adjacent_difference(intsCopy.begin(), intsCopy.end(), intsCopy.begin());

	
	return std::abs( *std::min_element(intsCopy.begin(), intsCopy.end()) );
}


int Span::longestSpan(void) const
{
	if (_nb <= 1)
		throw notEnoughInts();
	std::vector<int>::const_iterator itMin =  std::min_element(_ints.begin(), _ints.end());
	std::vector<int>::const_iterator itMax =  std::max_element(_ints.begin(), _ints.end());

	return *itMax - *itMin;
	
}

void Span::addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	std::vector<int>::const_iterator	it;

	it = begin;
	while (it != end)
	{
		addNumber(*it);
		it++;
	}
}

std::vector<int> Span::getInts(void) const
{
	return _ints;
}

unsigned int Span::getNb(void) const
{
	return _nb;
}


std::ostream	&operator<<(std::ostream &o, const Span &s)
{
	std::vector<int>	ints = s.getInts();
	for (unsigned int i = 0; i < s.getNb(); i++)
		std::cout << ints[i] << " ";
	return o;
}
