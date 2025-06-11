/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 20:00:44 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/11 20:06:07 by bchedru          ###   ########.fr       */
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
		bool	operator>(Fixed const& other)const;
		bool	operator<(Fixed const& other)const;
		bool	operator>=(Fixed const& other)const;
		bool	operator<=(Fixed const& other)const;
		bool	operator==(Fixed const& other)const;
		bool	operator!=(Fixed const& other)const;
		Fixed	operator+(Fixed const& other)const;
		Fixed	operator-(Fixed const& other)const;
		Fixed	operator*(Fixed const& other)const;
		Fixed	operator/(Fixed const& other)const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void)const;

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a,const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a,const Fixed &b);
};

std::ostream & operator<<(std::ostream &o, Fixed const &i);