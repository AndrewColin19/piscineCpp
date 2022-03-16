/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:41:26 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 14:04:44 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "------ NORMAL PART ------" << std::endl;
	Animal* meta = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	std::cout << meta->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	meta->makeSound();
	dog->makeSound();
	cat->makeSound();

	delete cat;
	delete dog;
	delete meta;

	std::cout << "\n------ WRONG PART -------" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();

	std::cout << wmeta->getType() << " " << std::endl;
	std::cout << wcat->getType() << " " << std::endl;

	wmeta->makeSound();
	wcat->makeSound();

	delete wcat;
	delete wmeta;

	return (0);
}