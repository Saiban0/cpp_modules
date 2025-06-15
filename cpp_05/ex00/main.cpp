/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:44:02 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/15 20:16:38 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat gerard = Bureaucrat("Gerard Papiers", 150);
		Bureaucrat suzanne = Bureaucrat("Suzanne Tamponneau", 1);
		std::cout << std::endl;
		std::cout << gerard << std::endl << suzanne << std::endl << std::endl;
		// gerard = suzanne;
		std::cout << gerard << std::endl << suzanne << std::endl << std::endl;
		gerard.decrementGrade();
		std::cout << gerard << std::endl << suzanne << std::endl << std::endl;
		gerard.incrementGrade();
		std::cout << gerard << std::endl << suzanne << std::endl << std::endl;
		suzanne.decrementGrade();
		std::cout << gerard << std::endl << suzanne << std::endl << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}