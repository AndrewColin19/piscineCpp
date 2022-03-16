/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:47:33 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:02:11 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain *_brain;
	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog&	operator=(const Dog &copy);
		virtual ~Dog(void);

		void	makeSound(void);
};