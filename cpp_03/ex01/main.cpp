/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:18:04 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 16:15:34 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Scav("Scav");
	ScavTrap Trap("Trap");
	Scav.attack("Trap");
	std::cout << "Trap hit points = " << Trap.getHitPoints() << std::endl;
	Scav.setAttackDamage(1);
	Scav.attack("Trap");

	Scav.takeDamage(5);
	std::cout << "Scav hit points = " << Scav.getHitPoints() << std::endl;
	Scav.beRepaired(5);

	std::cout << std::endl << "Scav hit points = " << Scav.getHitPoints() << " Scav energy points = " << Scav.getEnergyPoints() << std::endl;
	Scav.guardGate();
	Scav.setEnergyPoints(0);
	Scav.beRepaired(5);
	Scav.setHitPoints(0);
	Scav.attack("Trap");
	return (0);
}