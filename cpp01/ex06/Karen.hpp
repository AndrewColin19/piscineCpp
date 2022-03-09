/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:40:27 by acolin            #+#    #+#             */
/*   Updated: 2022/03/09 17:09:41 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Karen(void);
		~Karen(void);
		void complain(std::string level);		
};