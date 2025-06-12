/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:48:55 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 19:44:57 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->setType("Cat");
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& original) : Animal(original)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = original;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
