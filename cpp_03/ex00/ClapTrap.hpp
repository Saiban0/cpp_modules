/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:11:38 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/11 20:36:27 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	private:
		std::string	_Name;
		int			_HitPoints = 10;
		int			_EnergyPoints = 10;
		int			_AttackDamage = 0;
		
	public:
		ClapTrap(std::string name);
		ClapTrap(const Fixed& original);
		ClapTrap(const int cont_int);
		ClapTrap(const float const_float);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
