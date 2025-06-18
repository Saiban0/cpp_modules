/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:18:18 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/18 18:21:39 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("Shrubbery creation form", 145, 137), _gradeToSign(145), _gradeToExec(137)
{
	std::cout << "Shrubbery constructor called" << std::endl;
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original)
: AForm("Shrubbery creation form", 145, 137), _gradeToSign(145), _gradeToExec(137)
{
	std::cout << "Shrubbery copy contructor called" << std::endl;
	this->_target = original._target;
	*this = original;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor called" << std::endl;
}

int	ShrubberyCreationForm::getGradeToSign()const
{
	return (this->_gradeToSign);
}

int	ShrubberyCreationForm::getGradeToExec()const
{
	return (this->_gradeToExec);
}

std::string	ShrubberyCreationForm::getTarget()const
{
	return (this->_target);
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
		this->_target = other._target;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)const
{
	if (!this->getSigned())
		throw AForm::FormNotSigned();
	else if (this->getGradeToExec() > executor.getGrade())
		throw GradeTooLowException();
	else
	{
		std::ofstream File_shru(std::string(this->_target + "_shrubbery").c_str());
		if (!File_shru)
		{
			std::cout << "Error cant open the file" << std::endl;
			return;
		}
		File_shru << "	           /\\				" << '\n';	
		File_shru << "            <  >				" << '\n';	
		File_shru << "             \\/				" << '\n';			
		File_shru << "             /\\				" << '\n';
		File_shru << "            /  \\				" << '\n';
		File_shru << "           /++++\\				" << '\n';			
		File_shru << "          /  ()  \\			" << '\n';		
		File_shru << "          /      \\			" << '\n';
		File_shru << "         /~`~`~`~`\\			" << '\n';	
		File_shru << "        /  ()  ()  \\			" << '\n';	
		File_shru << "       /            \\			" << '\n';		
		File_shru << "       / &*&*&*&*&*& \\		" << '\n';		
		File_shru << "      /  ()  ()  ()  \\		" << '\n';		
		File_shru << "      /               \\		" << '\n';			
		File_shru << "     /+++++++++++++++++\\		" << '\n';			
		File_shru << "    /  ()  ()  ()  ()   \\		" << '\n';			
		File_shru << "    /                   \\		" << '\n';			
		File_shru << "   /~`~`~`~`~`~`~`~`~`~`\\		" << '\n';			
		File_shru << "  /  ()  ()  ()  ()  ()  \\	" << '\n';				
		File_shru << "  / &*&*&*&*&*&*&*&*&*&*& \\	" << '\n';				
		File_shru << " /                        \\	" << '\n';			
		File_shru << "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\	" << '\n';			
		File_shru << "           |   |				" << '\n';		
		File_shru << "          |`````|				" << '\n';		
		File_shru << "          \\_____/				" << '\n';		
		File_shru << " 								" << std::endl;
		File_shru.close();	
	}
}
