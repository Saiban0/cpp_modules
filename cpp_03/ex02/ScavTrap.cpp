/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:53:33 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 16:25:36 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap(original)
{
	std::cout << "ScavTrap Copy constructor called on " << original.getName() << std::endl;
	*this = original;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << this->getName() << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << this->getName() << " is now guarding the gate" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getHitPoints() < 1)
		std::cout << "ScavTrap " << this->getName() << " cannot attack because it's out of hit points" << std::endl;
	else if (this->getEnergyPoints() > 0)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "ScavTrap " << this->getName() << " attacked " << target << " and dealt " << this->getAttackDamage() << " damages" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->getName() << " does not have enough energy to attack" << std::endl;
}
