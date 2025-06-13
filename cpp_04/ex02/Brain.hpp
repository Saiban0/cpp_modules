/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:55:13 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/13 11:09:32 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Brain
{
	private:
		std::string	*_ideas;
	public:
		/*Constructors and destructor*/
		Brain();
		Brain(const Brain& original);
		~Brain();
		Brain	&operator=(const Brain &other);
		/*Setters and getters*/
		std::string	*getIdeas()const;
		void		setIdeas();
		/*Other methods*/
};
