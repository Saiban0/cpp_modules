/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 20:00:44 by bchedru           #+#    #+#             */
/*   Updated: 2025/05/29 20:44:56 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int					_integer_part;
		const static int	_nbBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& original);
		~Fixed();

		Fixed& operator=(const Fixed& original);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};