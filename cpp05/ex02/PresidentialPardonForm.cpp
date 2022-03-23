/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:28:56 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 11:28:56 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form::Form("presidential pardon", 25, 5), _target(target)
{ }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy)
	: Form::Form(copy), _target(copy.getTarget())
{ }

PresidentialPardonForm::~PresidentialPardonForm(void)
{ }

void	PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	std::cout << "Perceuses loud sound\n";

	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();
	if (!this->isSigned())
		throw Form::NotSignedException();

	std::cout << this->getTarget() << " has been forgiven by Zafod Beeblebrox!\n";
}

std::string	PresidentialPardonForm::getTarget(void) const
{ return (this->_target); }

void	PresidentialPardonForm::setTarget(std::string & target)
{ this->_target = target; }
