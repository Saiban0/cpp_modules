/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:44:02 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/19 17:19:57 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() 
{
//ok
	try
	{
		ShrubberyCreationForm ShrubberyForm("jean ");
		RobotomyRequestForm RobotomyForm("jean ");
		PresidentialPardonForm PresidentialForm("jean ");

		Bureaucrat Louis("Louis ", 1);
		ShrubberyForm.beSigned(Louis);
		Louis.executeForm(ShrubberyForm);
		std::cout << "\n";
		RobotomyForm.beSigned(Louis);
		Louis.executeForm(RobotomyForm);
		std::cout << "\n";
		PresidentialForm.beSigned(Louis);
		Louis.executeForm(PresidentialForm);
		std::cout << "\n";
	}
	catch (std::exception& e)
	{
		std::cout << " error Aform " << std::endl;
	}
	std::cout << "----------------\n" << std::endl;
//ko
	try
	{
		ShrubberyCreationForm ShrubberyForm("jean ");

		Bureaucrat Louis("Louis ", 150);
		ShrubberyForm.beSigned(Louis);
		Louis.executeForm(ShrubberyForm);
	}
	catch (std::exception& e)
	{
		std::cout << " error Aform shrubbery " << std::endl;
	}
//ko
	std::cout << "----------------\n" << std::endl;
	try
	{
		RobotomyRequestForm RobotomyForm("jean ");

		Bureaucrat Louis("Louis ", 150);
		RobotomyForm.beSigned(Louis);
		Louis.executeForm(RobotomyForm);
	}
	catch (std::exception& e)
	{
		std::cout << "error Aform robotomy " << std::endl;
	}
//ko
	std::cout << "----------------\n" << std::endl;
	try
	{
		PresidentialPardonForm PresidentialForm("jean ");

		Bureaucrat Louis("Louis ", 150);
		PresidentialForm.beSigned(Louis);
		Louis.executeForm(PresidentialForm);
	}
	catch (std::exception& e)
	{
		std::cout << " error Aform presidant " << std::endl;
	}
}
