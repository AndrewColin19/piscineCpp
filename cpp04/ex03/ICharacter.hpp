/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:15:29 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:15:29 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual	~ICharacter(void) {}

		virtual void	equip(AMateria* m) = 0;
		virtual void	unequip(int i) = 0;
		virtual void	use(int i, ICharacter& target) = 0;

		virtual void	setName(std::string name) = 0;
		virtual const std::string&	getName(void) const = 0;
		virtual void	setMateria(int i, AMateria *m) = 0;
		virtual AMateria*	getMateria(int i) const = 0;
};
