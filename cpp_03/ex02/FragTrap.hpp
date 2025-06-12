/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:52:20 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 16:31:05 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		/*Constructors and destructor*/
		FragTrap(std::string name);
		FragTrap(const FragTrap& original);
		~FragTrap();
		/*Other methods*/
		void	highFiveGuys();
		void	attack(const std::string& original);
};