/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:11:32 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 13:42:20 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->setName(name);
	this->setHitPoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
	std::cout << "Default constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& original)
{
	std::cout << "Copy constructor called on " << original.getName() << std::endl;
	*this = original;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called for " << this->getName() << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Name = other.getName();
		this->_HitPoints = other.getHitPoints();
		this->_EnergyPoints = other.getEnergyPoints();
		this->_AttackDamage = other.getAttackDamage();
	}
	return *this;
}

int	ClapTrap::getHitPoints()const
{
	return (this->_HitPoints);
}

int	ClapTrap::getEnergyPoints()const
{
	return (this->_EnergyPoints);
}

int	ClapTrap::getAttackDamage()const
{
	return (this->_AttackDamage);
}

std::string	ClapTrap::getName()const
{
	return (this->_Name);
}

void	ClapTrap::setHitPoints(int value)
{
	this->_HitPoints = value;
}

void	ClapTrap::setEnergyPoints(int value)
{
	this->_EnergyPoints = value;
}

void	ClapTrap::setAttackDamage(int value)
{
	this->_AttackDamage = value;
}

void	ClapTrap::setName(std::string value)
{
	this->_Name = value;
}


void	ClapTrap::attack(const std::string& target)
{
	if (this->getHitPoints() < 1)
		std::cout << this->getName() << " cannot attack because it's out of hit points" << std::endl;
	else if (this->getEnergyPoints() > 0)
	{
		this->_EnergyPoints -= 1;
		std::cout << this->getName() << " attacked " << target << " and dealt " << this->getAttackDamage() << " damages" << std::endl;
	}
	else
		std::cout  << this->getName() << " does not have enough energy to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->getName() << " suffered " << amount << " damages" << std::endl;
	this->_HitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() < 1)
		std::cout << this->getName() << " cannot repair itself because it's out of hit points" << std::endl;
	if (this->getEnergyPoints() > 0)
	{
		this->_EnergyPoints -= 1;
		this->_HitPoints += amount;
		std::cout << this->getName() << " repaired itself for " << amount << " hit points" << std::endl;
	}
	else
		std::cout  << this->getName() << " does not have enough energy to repair itself" << std::endl;
}
