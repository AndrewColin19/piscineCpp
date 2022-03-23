/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:35:44 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 15:36:10 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
void	swap(T & a, T & b)
{
	T	c = a; 
	a = b;
	b = c;
}

template<typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}