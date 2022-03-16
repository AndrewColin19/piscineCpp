/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:15:38 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:15:38 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}

		virtual void	learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};
