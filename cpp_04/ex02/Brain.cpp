/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:01:56 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/13 11:27:46 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default brain constructor called" << std::endl;
	this->setIdeas();
}

Brain::Brain(const Brain& original)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = original;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	if (this->_ideas)
		delete[] _ideas;
}

std::string	*Brain::getIdeas()const
{
	return (this->_ideas);
}

void	Brain::setIdeas()
{
		this->_ideas = new std::string[100];
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return *this;
}
