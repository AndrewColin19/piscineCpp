/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:54:48 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 13:54:48 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct
{
	std::string	name;
}	Data;

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data data = {"Andrew"};
	std::cout << "Data addr: " << &data << std::endl; 
	std::cout << "Data name: " << data.name << std::endl; 

	uintptr_t raw = serialize(&data);
	std::cout << "Raw addr: " << &raw << std::endl; 
	std::cout << "Raw value: " << raw << std::endl; 

	Data	*dataBis = deserialize(raw);
	std::cout << "Deserialized data addr: " << dataBis << std::endl; 
	std::cout << "Deserialized data value: " << dataBis->name << std::endl; 
	return (0);
}

