/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:16:59 by acolin            #+#    #+#             */
/*   Updated: 2022/03/22 17:16:59 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat *A = new Bureaucrat("Rober", 20);
	std::cout << A << std::endl;
	
	Bureaucrat *B = new Bureaucrat("Luc", 40);
	std::cout << B << std::endl;

	try {
		Form *formA = new Form("Adhesion", 30, 20);
		std::cout << formA << std::endl;

		A->signForm(formA);
		std::cout << formA << std::endl;
		delete formA;

		Form *formB = new Form("Adhesion2", 30, 20);
		std::cout << formB << std::endl;

		B->signForm(formB);
		std::cout << formB << std::endl;
		delete formB;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "Error: " << e.what() << std::endl;	
	}
	
	delete A;
	delete B;
	
	return (0);
}

