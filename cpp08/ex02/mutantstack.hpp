/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:22:43 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 17:22:43 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>(){}

		MutantStack(const MutantStack & copy) : std::stack<T>(copy){ *this = copy; }

		~MutantStack(void){}

		MutantStack&	operator=(const MutantStack & copy)
		{
			std::stack<T>::operator=(copy);
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator; 
		
		iterator	begin(void)
		{
			return (this->c.begin());
		}

		iterator	end(void)
		{
			return (this->c.end());
		}
};
