/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 19:44:02 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/13 20:22:34 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat gerard("Gérard Papiers", 30);
		std::cout << gerard << std::endl;
		gerard.incrementGrade();
		std::cout << gerard << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "error" << std::endl;
	}
	try
	{
		Bureaucrat philipe("Suzanne Cléron", -10);
		std::cout << philipe << std::endl;
		philipe.decrementGrade();
		std::cout << philipe << std::endl;
	}
	catch (std::exception& e)
	{	
		std::cout << "error" << std::endl;
	}
	try
	{
		Bureaucrat theo("Marcel Formulaire", 160);
		std::cout << theo << std::endl;
		theo.incrementGrade();
		std::cout << theo << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "error" << std::endl;
	}
	try
	{
		Bureaucrat louis("Brigitte Tamponneau", 149);
		std::cout << louis << std::endl;
		louis.incrementGrade();
		std::cout << louis << std::endl;
		louis.incrementGrade();
		std::cout << louis << std::endl;
		louis.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << "error" << std::endl;
	}
}