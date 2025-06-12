/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:57:51 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 18:57:51 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	private:
		std::string	_type;
	public:
		/*Constructors and destructors*/
		WrongAnimal();
		WrongAnimal(const WrongAnimal& original);
		~WrongAnimal();
		/*Setters and getters*/
		void		setType(std::string type);
		std::string	getType()const;
		/*Other methods*/
		void	makeSound()const;
};