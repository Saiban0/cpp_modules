/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:52:20 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 16:20:28 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		/*Constructors and destructor*/
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& original);
		~ScavTrap();
		/*Other methods*/
		void	guardGate();
		void	attack(const std::string& original);
};