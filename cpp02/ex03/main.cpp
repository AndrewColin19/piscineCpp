/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:15:22 by acolin            #+#    #+#             */
/*   Updated: 2022/03/14 16:32:31 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point	A(Fixed(0), Fixed(0));
	Point	B(Fixed(20), Fixed(0));
	Point	C(Fixed(10), Fixed(30));

	std::cout << "Triangle: A(0, 0), B(20, 0), C(10, 30)" << std::endl;
	std::cout << "Point(x= 0,y= 0) => " << (bsp(A, B, C, Point(0, 0)) ? "Inside" : "Outside") << std::endl;
	std::cout << "Point(x= 1,y= 1) => " << (bsp(A, B, C, Point(1, 1)) ? "Inside" : "Outside") << std::endl;
	std::cout << "Point(x=-5,y=-5) => " << (bsp(A, B, C, Point(-5, -5)) ? "Inside" : "Outside") << std::endl;
	return (0);
}
