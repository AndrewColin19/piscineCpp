/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:16:08 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:16:08 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_learned[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		MateriaSource&	operator=(const MateriaSource &copy);
		~MateriaSource(void);

		void	learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const &type);

		void	setMateria(int i, AMateria	*m);
		AMateria	*getMateria(int i) const;
};
