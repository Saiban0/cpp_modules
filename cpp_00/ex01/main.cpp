/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:11:28 by bchedru           #+#    #+#             */
/*   Updated: 2025/01/17 18:38:54 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main(void)
{
	int		nb_contacts = 0;
	Phonebook	phonebook;
	std::string	input;

	while (1)
	{
		std::cout << "Welcome, accepted commands are 'ADD' 'SEARCH' and 'EXIT'" << std::endl;
		signal(SIGINT, SIG_IGN);
		std::getline(std::cin, input);
		if (!std::cin.good())
			break;
		upper_str(&input);
		if (input.compare("ADD") == 0)
		{
			if (nb_contacts >= 8)
				nb_contacts = 1;
			else
				nb_contacts++;
			phonebook.add_contact(nb_contacts - 1);
			std::cout << "New contact successfully added" << std::endl;
		}
		else if (input.compare("SEARCH") == 0)
			phonebook.search_contact();
		else if (input.compare("EXIT") == 0)
			break;
		else
			std::cout << "Unrecognized command" << std::endl;
	}
	return (0);
}
