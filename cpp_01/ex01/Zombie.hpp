/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:06:35 by bchedru           #+#    #+#             */
/*   Updated: 2025/03/11 12:30:15 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>


class	Zombie
{
	private :
		std::string	_name;
	public :
		Zombie();
		~Zombie();

		void		setName(std::string name);
		std::string	getName();

		void		announce();
};

Zombie		*newZombie(std::string name);
Zombie*		zombieHorde(int N, std::string name);
