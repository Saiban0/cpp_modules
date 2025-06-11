/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 20:10:05 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/11 20:06:03 by bchedru          ###   ########.fr       */
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

bool	Fixed::operator>(Fixed const& other)const
{
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<(Fixed const& other)const
{
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=(Fixed const& other)const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=(Fixed const& other)const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==(Fixed const& other)const
{
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(Fixed const& other)const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator+(Fixed const& other)const
{
	return (this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(Fixed const& other)const
{
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(Fixed const& other)const
{
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(Fixed const& other)const
{
	return (this->toFloat() / other.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->_integer_part++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_integer_part++;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_integer_part--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_integer_part--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
			return (a);
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
			return (a);
		return (b);
}
