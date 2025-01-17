/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:41:38 by bchedru           #+#    #+#             */
/*   Updated: 2025/01/17 17:35:13 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	upper_str(std::string *str)
{
	for (int i = 0; (*str)[i]; i++)
		(*str)[i] = std::toupper((*str)[i]);
}

std::string	get_user_input(std::string prompt, bool number)
{
	std::string	input;
	bool		verif = false;

	while (!verif){
		std::cout << prompt;
		signal(SIGINT, SIG_IGN);
		std::getline(std::cin, input);
		if (!std::cin.good())
			return (NULL);
		verif = check_user_input(input, number);
	}
	return (input);
}

bool	check_user_input(std::string input, bool number)
{
	if (input.empty()){
		std::cout << "This cannot be empty" << std::endl;
		return (false);
	}
	if (number){
		for (int i = 0; i < (int)input.size(); i++){
			if (!std::isdigit(input[i])){
				std::cout << "Only numbers can be contained in this field" << std::endl;
				return (false);
			}
		}
	}
	return (true);
}

std::string trunc_str(std::string str)
{
	std::string dest = str.substr(0, 9);	
	dest += '.';
	return (dest);
}

void	print_info(std::string str)
{
	int	i = str.size();
	if (i > 10)
		str = trunc_str(str);
	i = 11 - i;
	std::cout << std::left << std::setw(i) << "|" << str;
}

std::string	ft_itoa(int i)
{
	std::stringstream	ss;
	std::string			str;

	ss << i;
	ss >> str;
	if (ss.fail())
		return "";
	return (str);
}
