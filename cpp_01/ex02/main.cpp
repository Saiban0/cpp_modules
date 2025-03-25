/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:21:14 by bchedru           #+#    #+#             */
/*   Updated: 2025/03/11 13:03:47 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string str = "HI THIS IS THE BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Base adress = " << &str << std::endl;
	std::cout << "Pointer adress = " << &stringPTR << std::endl;
	std::cout << "Reference adress = " << &stringREF << std::endl;

	std::cout << "Base value = " << str << std::endl;
	std::cout << "Pointer value = " << *stringPTR << std::endl;
	std::cout << "Reference value = " << stringREF << std::endl;
}
