/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:47:29 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/17 20:37:35 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
	protected:
		/*Constuctors and destructor*/
		AForm(const std::string name, int gradeToSign, int gradeToExec);
		AForm(const AForm& original);
	public:
		virtual ~AForm();
		/*Setters and getters*/
		int			getGradeToSign()const;
		int			getGradeToExec()const;
		std::string	getName()const;
		bool		getSigned()const;
		/*Operators*/
		AForm	&operator=(const AForm &other);
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
		class FormNotSigned: public std::exception
		{
			public:
				const char* what() const throw();
		};
		/*Other methods*/
		void	beSigned(Bureaucrat bureaucrat);
		virtual void	execute(Bureaucrat const &executor)const;
};
std::ostream &operator<<(std::ostream & out, AForm const & AForm);