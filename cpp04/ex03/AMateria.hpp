/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:13:56 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:13:56 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(void);
		AMateria(const std::string &type);
		AMateria(const AMateria &copy);
		AMateria&	operator=(const AMateria &copy);
		virtual	~AMateria(void);

		void	setType(std::string type);
		const std::string&	getType(void) const;

		virtual	AMateria*	clone(void) const = 0;
		virtual void	use(ICharacter &target);
};
