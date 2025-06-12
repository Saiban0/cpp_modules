/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:18:04 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 13:43:22 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Clap("Clap");
	ClapTrap Trap("Trap");
	Clap.attack("Trap");

	Clap.setAttackDamage(1);
	Clap.attack("Trap");

	Clap.takeDamage(5);
	std::cout << "Clap hit points = " << Clap.getHitPoints() << std::endl;
	Clap.beRepaired(5);

	std::cout << std::endl << "Clap hit points = " << Clap.getHitPoints() << " Clap energy points = " << Clap.getEnergyPoints() << std::endl;

	Clap.setEnergyPoints(0);
	Clap.beRepaired(5);
	Clap.setHitPoints(0);
	Clap.attack("Trap");

	return (0);
}