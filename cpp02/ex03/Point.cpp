/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:22:46 by acolin            #+#    #+#             */
/*   Updated: 2022/03/14 16:35:18 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0){}

Point::Point(const Fixed &x, const Fixed &y) : x(x), y(y){}

Point::Point(const Point &copy): x(copy.x), y(copy.y){}

Point::~Point(void){}

Point&	Point::operator=(const Point &copy)
{
	(Fixed&) this->x = copy.x;
	(Fixed&) this->y = copy.y;
	std::cout << copy.x << " " << this->x << std::endl;
	std::cout << copy.y << " " << this->y << std::endl;
	return (*this);
}

Fixed Point::getX(void) const
{ return (Fixed) (this->x); }

Fixed Point::getY(void) const
{ return (Fixed) (this->y); }
