/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:10:22 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 17:10:22 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int main(void)
{
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Span sp = Span(3);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
	}
	catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Span sp = Span(3);
		sp.addNumber(5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Span sp = Span(3);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

