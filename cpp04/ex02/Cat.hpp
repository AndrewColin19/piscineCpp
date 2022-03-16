/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:42:38 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:02:04 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Cat(void);
		Cat(const Cat &copy);
		Cat&	operator=(const Cat &copy);
		virtual ~Cat(void);

		void	makeSound(void);
};