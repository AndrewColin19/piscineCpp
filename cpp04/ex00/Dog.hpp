/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:47:33 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 13:58:43 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog&	operator=(const Dog &copy);
		virtual ~Dog(void);

		void	makeSound(void);
};