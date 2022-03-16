/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:14:59 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:14:59 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &copy);
		Cure&	operator=(const Cure &copy);
		virtual ~Cure(void);

		Cure*	clone(void) const;
		void	use(ICharacter& target);
};
