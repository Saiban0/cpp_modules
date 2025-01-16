/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:41:38 by bchedru           #+#    #+#             */
/*   Updated: 2025/01/16 18:42:59 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

std::string	get_user_input(std::string prompt, bool number)
{
	std::string	input;
	bool		verif = false;

	while (!verif){
		std::cout << prompt;
		std::getline(std::cin, input);
		verif = verif_user_input(input, number);
	}
	return (input);
}

bool	verif_user_input(std::string input, bool number)
{
	if (input.empty()){
		std::cout << "This cannot be empty" << endl;
		return (false);
	}
	if (number){
		for (int i = 0; i < input.size() < i++){
			if (!std::isdigit(input[i])){
				std::cout << "Only numbers can be contained in this field" << endl;
				return (false);
			}
		}
	}
	return (true);
}

