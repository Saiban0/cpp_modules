/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:47:29 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/17 20:37:35 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
	public:
		/*Constuctors and destructor*/
		Form(const std::string name, int gradeToSign, int gradeToExec);
		Form(const Form& original);
		~Form();
		/*Setters and getters*/
		int			getGradeToSign()const;
		int			getGradeToExec()const;
		std::string	getName()const;
		bool		getSigned()const;
		/*Operators*/
		Form	&operator=(const Form &other);
		Form	&operator<<(const Form &other);
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
		void	beSigned(Bureaucrat bureaucrat);
};
std::ostream &operator<<(std::ostream & out, Form const & form);