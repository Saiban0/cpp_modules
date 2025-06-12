/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:18:04 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 16:32:48 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap Frag("Frag");
	FragTrap Trap("Trap");
	Frag.attack("Trap");
	std::cout << "Trap hit points = " << Trap.getHitPoints() << std::endl;
	Frag.setAttackDamage(1);
	Frag.attack("Trap");

	Frag.takeDamage(5);
	std::cout << "Frag hit points = " << Frag.getHitPoints() << std::endl;
	Frag.beRepaired(5);

	std::cout << std::endl << "Frag hit points = " << Frag.getHitPoints() << " Frag energy points = " << Frag.getEnergyPoints() << std::endl;
	Frag.highFiveGuys();
	Frag.setEnergyPoints(0);
	Frag.beRepaired(5);
	Frag.setHitPoints(0);
	Frag.attack("Trap");
	return (0);
}