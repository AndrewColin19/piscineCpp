/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:20:20 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 16:29:21 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>
#include <iostream>

class NotFondException : public std::exception
{
	public :
		const char *what(void) const throw() {
			return ("Not found excexption");
		}
};

template<typename T>
int	easyfind(T &tab, int oc)
{
	typename T::iterator i = tab.begin();
	int	index = 0;

	while (i != tab.end())
	{
		if (*i == value)
			return (index);
		i++, index++;
	}
	throw NotFondException();
}