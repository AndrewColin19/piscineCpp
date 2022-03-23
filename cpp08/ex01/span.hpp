/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:13:17 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 17:13:17 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include <cmath>

class Span
{
	private:
		unsigned int	_N;
		unsigned int	_size;
		int				*_items;
	public:
		Span(unsigned int N);
		~Span(void);

		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);

		class	NumberCannotBeAdded : public std::exception
		{
			public:
				const char *what() const throw()
				{ return ("Number cannot be added."); }
		};

		class	SpanCannotBeFound : public std::exception
		{
			public:
				const char *what() const throw()
				{ return("Span cannot be found."); }
		};
};
