/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:28:47 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 11:28:47 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat *A = new Bureaucrat("bob1", 1);
	std::cout << A << std::endl;
	
	try {
		Form *formS = new ShrubberyCreationForm("home");
		Form *formR = new RobotomyRequestForm("bob2");
		Form *formP = new PresidentialPardonForm("bob2");
		std::cout << formS << std::endl;
		std::cout << formR << std::endl;
		std::cout << formP << std::endl;

		A->signForm(formS);
		A->executeForm(*formS);

		A->signForm(formR);
		A->executeForm(*formR);

		A->signForm(formP);
		A->executeForm(*formP);

		std::cout << formS << std::endl;
		std::cout << formR << std::endl;
		std::cout << formP << std::endl;
		delete formS;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "Error: " << e.what() << std::endl;	
	} catch (Form::NotSignedException &e) {
		std::cout << "Error: " << e.what() << std::endl;	
	} catch (Form::GradeTooHighException &e) {
		std::cout << "Error: " << e.what() << std::endl;	
	}
	
	delete A;
	
	return (0);
}

