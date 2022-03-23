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
	
	Bureaucrat *M = new Bureaucrat("Luc", 40);
	std::cout << M << std::endl;

	try {
		Form *formA = new Form("Adhesion", 30, 20);
		std::cout << formA << std::endl;

		A->signForm(formA);
		std::cout << formA << std::endl;
		delete formA;

		Form *formM = new Form("Adhesion2", 30, 20);
		std::cout << formM << std::endl;

		M->signForm(formM);
		std::cout << formM << std::endl;
		delete formM;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "Error: " << e.what() << std::endl;	
	}
	
	delete A;
	delete M;
	
	return (0);
}

