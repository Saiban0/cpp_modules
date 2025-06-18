/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:36:18 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/18 18:49:18 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("Robotomy creation form", 72, 45), _gradeToSign(72), _gradeToExec(45)
{
	std::cout << "Robotomy constructor called" << std::endl;
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& original)
: AForm("Robotomy creation form", 72, 45), _gradeToSign(72), _gradeToExec(45)
{
	std::cout << "Robotomy copy contructor called" << std::endl;
	this->_target = original._target;
	*this = original;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor called" << std::endl;
}

int	RobotomyRequestForm::getGradeToSign()const
{
	return (this->_gradeToSign);
}

int	RobotomyRequestForm::getGradeToExec()const
{
	return (this->_gradeToExec);
}

std::string	RobotomyRequestForm::getTarget()const
{
	return (this->_target);
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
		this->_target = other._target;
	}
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor)const
{
	if (!this->getSigned())
		throw AForm::FormNotSigned();
	else if (this->getGradeToExec() > executor.getGrade())
		throw GradeTooLowException();
	else
	{
		srand(time(0));
		int i = rand() % 100 + 1;
	
		if (i >= 50)
		{
			std::cout << "* drilling noise *" << std::endl;
			std::cout << this->getTarget() << " was succesfully robotomized" << std::endl;
		}
		else
			std::cout << this->getTarget() << " could not be robotomized" << std::endl;
	}
}
