/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:58:37 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/17 20:48:23 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string name, int gradeToSign, int gradeToExec)
: _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	std::cout << "AForm constructor called" << std::endl;
	if (gradeToSign > 150 || gradeToExec > 150)
		throw AForm::GradeTooHighException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw AForm::GradeTooLowException();
	else
		this->_signed = 0;
}

AForm::AForm(const AForm& original)
: _name(original._name), _gradeToSign(original._gradeToSign),
	_gradeToExec(original._gradeToExec)
{
	std::cout << "AForm copy contructor called" << std::endl;
	*this = original;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

bool	AForm::getSigned()const
{
	return (this->_signed);
}

std::string	AForm::getName()const
{
	return (this->_name);
}

int	AForm::getGradeToSign()const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExec()const
{
	return (this->_gradeToExec);
}

AForm	&AForm::operator=(const AForm &other)
{
	if (this != &other)
		this->_signed = other._signed;
	return (*this);
}

std::ostream &operator<<(std::ostream & out, AForm const & AForm)
{
	out << AForm.getName() << ", grade to be signed :" << AForm.getGradeToSign()
		<< ", grade to be executed :" << AForm.getGradeToExec() <<
		" signed state :" << AForm.getSigned();
	return (out);
}

void	AForm::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() >= this->getGradeToSign())
	{
		this->_signed = 1;
		std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "The grade is too low";
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "The grade is too high";
}

const char *AForm::FormNotSigned::what() const throw()
{
	return "The form is not signed";
}

void	AForm::execute(Bureaucrat const &executor)const
{
	if (!this->getSigned())
		throw AForm::FormNotSigned();
	else if (this->getGradeToExec() > executor.getGrade())
		throw GradeTooLowException();
	else
		std::cout << "undefined form" << std::endl;
}
