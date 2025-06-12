/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:11:38 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 13:42:18 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	private:
		std::string	_Name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
		
	public:
		/*Constructors and destructor*/
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& original);
		~ClapTrap();
		/*Operators overriding*/
		ClapTrap	&operator=(const ClapTrap &other);
		/*Getters and setters*/
		int			getHitPoints()const;
		int			getEnergyPoints()const;
		int			getAttackDamage()const;
		std::string	getName()const;
		void		setHitPoints(int value);
		void		setEnergyPoints(int value);
		void		setAttackDamage(int value);
		void		setName(std::string value);
		/*Other methods*/
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
