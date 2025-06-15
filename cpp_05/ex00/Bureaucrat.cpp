/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:39:27 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/15 20:17:13 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name)
{
	std::cout << "Bureaucrat default contructor" << std::endl;
		if (grade > 150)
			throw Bureaucrat::GradeTooHighException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& original): _name(original._name)
{
	std::cout << "Bureaucrat copy constructor" << std::endl;
	*this = original;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor" << std::endl;
}

int	Bureaucrat::getGrade()const
{
	return (this->_grade);
}

std::string	Bureaucrat::getName()const
{
	return (this->_name);
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		// this->_name = other._name;
		this->_grade = other._grade;
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & out, Bureaucrat const & bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The grade is too low";
}

void	Bureaucrat::incrementGrade()
{
		if ((this->_grade - 1) < 1)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
		if ((this->_grade + 1) > 150)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade++;
}
