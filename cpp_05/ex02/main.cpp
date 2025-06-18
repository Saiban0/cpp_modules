/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:44:02 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/18 18:42:21 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		ShrubberyCreationForm tree("tree");
		PresidentialPardonForm president("president");
		RobotomyRequestForm robot("robot");
		std::cout << std::endl;

		Bureaucrat Michel("Michel", 125);
		Bureaucrat Laure("Laure", 1);
		std::cout << std::endl;
		
		president.beSigned(Michel);
		Michel.executeForm(president);
		std::cout << president;
		std::cout << std::endl;
		
		president.beSigned(Laure);
		Laure.executeForm(president);
		std::cout << std::endl;
		
		robot.beSigned(Michel);
		Michel.executeForm(robot);
		robot.beSigned(Laure);
		Laure.executeForm(robot);
		Laure.executeForm(robot);
		std::cout << std::endl;
		
		tree.beSigned(Michel);
		Michel.executeForm(tree);
		Laure.executeForm(tree);
		std::cout << std::endl;
		
		std::cout << Michel;
		std::cout << Laure;
		std::cout << tree;
		std::cout << president;
		std::cout << robot;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
