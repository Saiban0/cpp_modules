/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:44:02 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/17 20:47:42 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat	gerard = Bureaucrat("Gerard Papiers", 150);
		Bureaucrat	suzanne = Bureaucrat("Suzanne Tamponneau", 1);
		Form		a38 = Form("A-38", 66, 100);
		Form		chiant = Form("chiant", 100, 100);

		a38.beSigned(gerard);
		std::cout << std::endl;

		for (int i = 0 ; i < 116 ; i++)
			gerard.incrementGrade();
		std::cout << std::endl;

		a38.beSigned(gerard);
		chiant.beSigned(suzanne);
		std::cout << std::endl;

		std::cout << gerard << std::endl;
		std::cout << suzanne << std::endl;
		std::cout << a38 << std::endl;
		std::cout << chiant << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
