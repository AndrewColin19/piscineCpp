/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:28:04 by acolin            #+#    #+#             */
/*   Updated: 2022/03/17 13:24:12 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);	
		Bureaucrat&	operator=(const Bureaucrat &copy);
		~Bureaucrat();

		std::string	getName(void) const;
		int			getGrade(void) const;

		class GradeTooHighException : std::exception {
			public:
				const char	*what(void) const throw() {
					return ("Error: Grade Too High");
				}
		};
		class GradeTooLowException : std::exception {
			public:
				const char	*what(void) const throw() {
					return ("Error: Grade Too Low");
				}
		};

		void	upGrade(void);
		void	downGrade(void);
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat *target);
