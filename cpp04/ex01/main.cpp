/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:41:26 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 14:44:57 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal	*animals[10];

	// On cree 10 chiens et 10 chats
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	// On fait faire du bruit aux chiens et chats
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();
	// On supprime tous les animaux
	for (int i = 0; i < 10; i++)
		delete animals[i];

	return (0);
}