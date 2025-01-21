/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:06:35 by bchedru           #+#    #+#             */
/*   Updated: 2025/01/21 18:11:15 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

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
void		randomChump(std::string name);
