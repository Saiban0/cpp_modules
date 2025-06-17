/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:58:37 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/17 20:48:23 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int gradeToSign, int gradeToExec)
: _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	std::cout << "Form constructor called" << std::endl;
	if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooHighException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooLowException();
	else
		this->_signed = 0;
}

Form::Form(const Form& original)
: _name(original._name), _gradeToSign(original._gradeToSign),
	_gradeToExec(original._gradeToExec)
{
	std::cout << "Form copy contructor called" << std::endl;
	*this = original;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

bool	Form::getSigned()const
{
	return (this->_signed);
}

std::string	Form::getName()const
{
	return (this->_name);
}

int	Form::getGradeToSign()const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExec()const
{
	return (this->_gradeToExec);
}

Form	&Form::operator=(const Form &other)
{
	if (this != &other)
		this->_signed = other._signed;
	return (*this);
}

std::ostream &operator<<(std::ostream & out, Form const & form)
{
	out << form.getName() << ", grade to be signed :" << form.getGradeToSign()
		<< ", grade to be executed :" << form.getGradeToExec() <<
		" signed state :" << form.getSigned();
	return (out);
}

void	Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() >= this->getGradeToSign())
	{
		this->_signed = 1;
		std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "The grade is too low";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "The grade is too high";
}
