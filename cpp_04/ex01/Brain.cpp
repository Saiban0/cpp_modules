/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:01:56 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 20:47:24 by bchedru          ###   ########.fr       */
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
}

std::string	*Brain::getIdeas()const
{
	return (this->_ideas);
}

void	Brain::setIdeas()
{
	std::string ideas[100];

	this->_ideas = ideas;
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->setIdeas(other.getIdeas());
	return *this;
}
