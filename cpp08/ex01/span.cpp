/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:11:58 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 17:11:58 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N): _N(N), _size(0)
{
	this->_items = new int[N];
}

Span::~Span(void){}

void	Span::addNumber(int n)
{
	if (this->_size == this->_N)
		throw Span::NumberCannotBeAdded();
	this->_items[this->_size++] = n;
}


int		Span::shortestSpan(void)
{
	if (this->_size <= 1)
		throw Span::SpanCannotBeFound();

	unsigned int	res = 4294967295;
	unsigned int	diff = 0;
	for (unsigned int i = 0; i < this->_N - 1; i++)
	{
		diff = abs(this->_items[i] - this->_items[i + 1]);
		if (diff < res) 
			res = diff;
	}
	return (res);
}

int		Span::longestSpan(void)
{
	if (this->_size <= 1)
		throw Span::SpanCannotBeFound();

	unsigned int	res = 0;
	unsigned int	diff = 0;
	for (unsigned int i = 0; i < this->_N - 1; i++)
	{
		diff = abs(this->_items[i] - this->_items[i + 1]);
		if (diff > res) 
			res = diff;
	}
	return (res);
}
