/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:53:20 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/13 11:18:20 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal *tab[100];
	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			tab[i] = new Dog;
		else
			tab[i] = new Cat;
	}
	for (int i = 0; i < 100; i++)
		tab[i]->makeSound();
	for (int i = 0; i < 100; i++)
		delete tab[i];
	delete j;
	delete i;
	
	return 0;
}
