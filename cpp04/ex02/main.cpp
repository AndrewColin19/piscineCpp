/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:41:26 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:07:25 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	// Instancier la class Animal empechera la compilation
	// AAnimal	*animal = new AAnimal();

	Dog	*dog = new Dog();
	Cat	*cat = new Cat();

	dog->makeSound();
	cat->makeSound();

	delete cat;
	delete dog;

	return (0);
}