/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:23:16 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 17:23:16 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
	std::cout << "===== MUTANTSTACK TESTS =====" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "====== STD::LIST TESTS ======" << std::endl;
	std::list<int> L;

	L.push_back(5);
	L.push_back(17);

	std::cout << L.back() << std::endl;

	L.pop_back();

	std::cout << L.size() << std::endl;

	L.push_back(3);
	L.push_back(5);
	L.push_back(737);
	L.push_back(0);

	std::list<int>::iterator it_L = L.begin();
	std::list<int>::iterator ite_L = L.end();

	++it_L;
	--it_L;

	while (it_L != ite_L)
	{
		std::cout << *it_L << std::endl;
		++it_L;
	}
	return (0);
}
