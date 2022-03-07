/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:02:04 by acolin            #+#    #+#             */
/*   Updated: 2022/03/07 19:45:35 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact tabContact[8];
	int last;
	int nb;
public:
	PhoneBook();
	void add();
	void search();
	void exit();
	~PhoneBook();
};
