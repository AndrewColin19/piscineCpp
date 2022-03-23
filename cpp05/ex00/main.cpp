/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:28:06 by acolin            #+#    #+#             */
/*   Updated: 2022/03/17 13:20:59 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat *A = new Bureaucrat("A", 0);
		std::cout << A << std::endl;
		delete A;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{ std::cout << e.what() << std::endl; }
	catch (Bureaucrat::GradeTooLowException& e)
	{ std::cout << e.what() << std::endl; }
	
	try
	{
		Bureaucrat *B = new Bureaucrat("B", 151);
		std::cout << B << std::endl;
		delete B;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{ std::cout << e.what() << std::endl; }
	catch (Bureaucrat::GradeTooLowException& e)
	{ std::cout << e.what() << std::endl; }
	
	
	try
	{
		Bureaucrat *C = new Bureaucrat("C", 20);
		std::cout << C << std::endl;
		delete C;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{ std::cout << e.what() << std::endl; }
	catch (Bureaucrat::GradeTooLowException& e)
	{ std::cout << e.what() << std::endl; }
	return (0);
}