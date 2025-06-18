/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:10:58 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/18 17:35:44 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>
#include <cstdlib>

class RobotomyRequestForm: public AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
		std::string			_target;
	public:
		/*Constructors and destructor*/
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &original);
		~RobotomyRequestForm();
		/*Setters and getters*/
		int			getGradeToSign()const;
		int			getGradeToExec()const;
		std::string	getTarget()const;
		/*Operator overload*/
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);
		/*Other functions*/
		void	execute(Bureaucrat const &executor)const;

};
