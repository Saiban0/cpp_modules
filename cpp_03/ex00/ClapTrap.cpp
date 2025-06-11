/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:11:32 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/11 20:45:56 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = "Default Name";
	std::cout << "Default constructor called for ClapTrap " << name << endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	std::cout << "Default constructor called for ClapTrap " << name << endl;
}

ClapTrap::ClapTrap(const Fixed& original)
{
	std::cout >> "Copy constructor called" << endl;
	*this = other;
}


