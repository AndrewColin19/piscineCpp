/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:02:04 by acolin            #+#    #+#             */
/*   Updated: 2022/02/08 14:38:54 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
private:
	Contact tabContact[8];
	int last;
public:
	PhoneBook();
	void add();
	void search();
	void exit();
	~PhoneBook();
};
