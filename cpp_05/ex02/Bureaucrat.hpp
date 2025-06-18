/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:33:37 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/18 18:47:24 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		/*Constructors and destructor*/
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat& original);
		virtual ~Bureaucrat();
		/*Setters and getters*/
		int			getGrade()const;
		std::string	getName()const;
		/*Operators*/
		Bureaucrat	&operator=(const Bureaucrat &other);
		Bureaucrat	&operator<<(const Bureaucrat &other);
		/*Exceptions*/
		class GradeTooHighException: public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char* what() const throw();
		};
		/*Other methods*/
		void	incrementGrade();
		void	decrementGrade();
		void	executeForm(AForm const &form);
};

std::ostream & operator<<(std::ostream & out, Bureaucrat const & bureaucrat);
