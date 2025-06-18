/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:10:58 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/18 18:23:09 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
		std::string			_target;
	public:
		/*Constructors and destructor*/
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &original);
		~ShrubberyCreationForm();
		/*Setters and getters*/
		int			getGradeToSign()const;
		int			getGradeToExec()const;
		std::string	getTarget()const;
		/*Operator overload*/
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);
		/*Other functions*/
		void	execute(Bureaucrat const &executor)const;

};
std::ostream &operator<<(std::ostream & out, AForm const & AForm);