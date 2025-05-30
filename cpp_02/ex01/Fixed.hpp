/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 20:00:44 by bchedru           #+#    #+#             */
/*   Updated: 2025/05/30 12:53:28 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_integer_part;
		const static int	_nbBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& original);
		Fixed(const int const_int);
		Fixed(const float const_float);
		~Fixed();

		Fixed& operator=(const Fixed& original);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void)const;
};

std::ostream & operator<<(std::ostream &o, Fixed const &i);