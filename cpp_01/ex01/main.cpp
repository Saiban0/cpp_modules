/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:21:14 by bchedru           #+#    #+#             */
/*   Updated: 2025/03/11 12:42:04 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie	*horde;
	int		N;

	if (argc == 1)
		N = 0;
	else
		N = atoi(argv[1]);
	horde = zombieHorde(N, "Billy");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return(0);
}