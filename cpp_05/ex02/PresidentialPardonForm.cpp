/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:37:21 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/18 18:49:31 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("Presidential creation form", 25, 5), _gradeToSign(25), _gradeToExec(5)
{
	std::cout << "Presidential constructor called" << std::endl;
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& original)
: AForm("Presidential creation form", 25, 5), _gradeToSign(25), _gradeToExec(5)
{
	std::cout << "Presidential copy contructor called" << std::endl;
	this->_target = original._target;
	*this = original;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential destructor called" << std::endl;
}

int	PresidentialPardonForm::getGradeToSign()const
{
	return (this->_gradeToSign);
}

int	PresidentialPardonForm::getGradeToExec()const
{
	return (this->_gradeToExec);
}


std::string	PresidentialPardonForm::getTarget()const
{
	return (this->_target);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
		this->_target = other._target;
	}
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor)const
{
	if (!this->getSigned())
		throw AForm::FormNotSigned();
	else if (this->getGradeToExec() > executor.getGrade())
		throw GradeTooLowException();
	else
		std::cout << this->getTarget() << " has been pardoned by President Zaphod Beeblebox." << std::endl;
}
