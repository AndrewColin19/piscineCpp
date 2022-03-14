/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:55:04 by acolin            #+#    #+#             */
/*   Updated: 2022/03/14 14:00:49 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed 
{
	private:
		static const int bits = 8;
		int value;
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		~Fixed(void);

		void operator=(const Fixed &copy);
		int	getRawBits(void) const;
		void setRawBits(const int raw);	
};