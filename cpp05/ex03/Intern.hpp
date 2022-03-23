/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:37:23 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 13:37:23 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form	**types;
	public:
		Intern(void);
		Intern(const Intern & copy);
		~Intern(void);

		Form	*makeForm(std::string formName, std::string formTarget);
		
		class FormDoesNotExistException : std::exception {
			public:
				const char	*what(void) const throw() {
					return ("Form Does Not Exist");
				}
		};
};
