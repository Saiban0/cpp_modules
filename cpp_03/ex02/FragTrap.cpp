/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:53:33 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 16:32:04 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& original) : ClapTrap(original)
{
	std::cout << "FragTrap Copy constructor called on " << original.getName() << std::endl;
	*this = original;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << this->getName() << std::endl;
}

void	FragTrap::highFiveGuys()
{
	std::cout << this->getName() << " wants to high-five" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->getHitPoints() < 1)
		std::cout << "FragTrap " << this->getName() << " cannot attack because it's out of hit points" << std::endl;
	else if (this->getEnergyPoints() > 0)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "FragTrap " << this->getName() << " attacked " << target << " and dealt " << this->getAttackDamage() << " damages" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->getName() << " does not have enough energy to attack" << std::endl;
}
