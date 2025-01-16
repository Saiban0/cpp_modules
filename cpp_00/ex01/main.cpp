/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:11:28 by bchedru           #+#    #+#             */
/*   Updated: 2025/01/16 18:24:25 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main(void)
{
	int		nb_contacts = 1;
	Phonebook	phonebook;
	std::string	input;

	while (1)
	{
		std::getline(std::cin, input);
		if (!std::cin.good())
			break;
		if (input.compare("ADD") == 0)
		{
			if (nb_contacts >= 8)
				nb_contacts = 1;
			else
				nb_contacts++;
			phonebook.add_contact(nb_contacts);
		}
		// else if (input.compare("SEARCH") == 0)
		else if (input.compare("EXIT") == 0)
			break;
		else
			std::cout << "Unrecognized commad, try 'ADD' 'SEARCH' or 'EXIT'" << std::endl;
	}
	return (0);
}
