/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:15:21 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:15:21 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &copy);
		Ice&	operator=(const Ice &copy);
		virtual ~Ice(void);

		Ice*	clone(void) const;
		void	use(ICharacter& target);
};
