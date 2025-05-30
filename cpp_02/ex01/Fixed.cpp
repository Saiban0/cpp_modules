/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 20:10:05 by bchedru           #+#    #+#             */
/*   Updated: 2025/05/30 13:08:49 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_integer_part = 0;
}

Fixed::Fixed(const int const_int)
{
	this->_integer_part = const_int << this->_nbBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float const_float)
{
	this->_integer_part = roundf(const_float * (1 << this->_nbBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& original)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(original.getRawBits());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& original)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &original)
		this->_integer_part = original.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_integer_part);
}

void	Fixed::setRawBits(int const raw)
{
	this->_integer_part = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 <<this->_nbBits));
}

int	Fixed::toInt(void) const
{
	return (this->_integer_part >> this->_nbBits);
}

std::ostream & operator<<(std::ostream & out, Fixed const & fixed)
{
	out << fixed.toFloat();
	return (out);
}
