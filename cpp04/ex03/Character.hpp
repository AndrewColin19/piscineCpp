/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:14:24 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:14:24 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &copy);
		Character&	operator=(const Character &copy);
		~Character(void);

		void	equip(AMateria *m);
		void	unequip(int i);
		void	use(int i, ICharacter& target);

		void	setName(std::string name);
		const std::string&	getName(void) const;
		void	setMateria(int i, AMateria *m);
		AMateria*	getMateria(int i) const;
};
