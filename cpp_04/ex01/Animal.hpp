/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:49:13 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/13 11:21:13 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	private:
		std::string	_type;
	public:
		/*Constructors and destructors*/
		Animal();
		Animal(const Animal& original);
		virtual ~Animal();
		/*Setters and getters*/
		void		setType(std::string type);
		std::string	getType()const;
		Animal	&operator=(const Animal &other);
		/*Other methods*/
		void	makeSound()const;
};
