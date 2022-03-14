/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:55:04 by acolin            #+#    #+#             */
/*   Updated: 2022/03/14 16:01:52 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed 
{
	private:
		static const int bits = 8;
		int value;
	public:
		Fixed(void);
		Fixed(const int val);
		Fixed(const Fixed &copy);
		Fixed(const float val);
		~Fixed(void);

		void operator=(const Fixed &copy);
		
		int	getRawBits(void) const;
		void setRawBits(const int raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);