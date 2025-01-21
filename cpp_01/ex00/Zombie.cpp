/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:16:21 by bchedru           #+#    #+#             */
/*   Updated: 2025/01/21 18:02:46 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->getName() << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName()
{
	return (this->_name);
}

void	Zombie::announce()
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
