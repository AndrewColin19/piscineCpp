/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:28:01 by acolin            #+#    #+#             */
/*   Updated: 2022/03/17 13:24:45 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("bob"), _grade(150){}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException(); 
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{ *this = copy; }

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
	(std::string) this->_name = copy._name;
	this->_grade = copy._grade;
	return (*this);
}

void Bureaucrat::upGrade(void)
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::downGrade(void)
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::string	Bureaucrat::getName(void) const
{ return ((std::string) this->_name); }

int	Bureaucrat::getGrade(void) const
{ return (this->_grade); }

std::ostream&	operator<<(std::ostream &out, const Bureaucrat *target)
{
	out << target->getName() << ", bureaucrat grade " << target->getGrade();
	return (out);
}
