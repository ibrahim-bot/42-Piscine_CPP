/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:44:53 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/13 18:52:47 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    this->_fixe = 0;
    return ;
}

Fixed::Fixed( Fixed const &copy )
{
    *this = copy;
    return ;
}

Fixed::Fixed(const float flo)
{
    this->_fixe = roundf(flo * (1 << this->bit));
    return ;
}

Fixed::Fixed(const int val)
{
    this->_fixe = val << this->bit;
    return ;
}

Fixed::~Fixed()
{
    return ;
}

int Fixed::getRawBits(void) const
{
    return (this->_fixe);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixe = raw;
    return ;
}

float	Fixed::toFloat(void) const
{
	return ((float) this->getRawBits() / (float)(1 << this->bit));
}

int		Fixed::toInt(void) const
{
	return _fixe >> this->bit;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	this->_fixe = rhs.getRawBits();
	return *this;
}

Fixed & Fixed::operator+(Fixed const & a)
{
	this->_fixe = a.getRawBits() + this->_fixe;
	return *this;
}

Fixed & Fixed::operator-(Fixed const & a)
{
	this->_fixe = this->_fixe - a.getRawBits();
	return *this;
}

Fixed & Fixed::operator*(Fixed const & a)
{
	this->_fixe = this->_fixe * a.toFloat();
	return *this;
}

Fixed & Fixed::operator/(Fixed const & a)
{
	this->_fixe = this->_fixe / a.toFloat();
	return *this;
}

int Fixed::operator==(Fixed const & a)
{
    if (this->_fixe == a._fixe)
        return (1);
    return (0);
}

int Fixed::operator!=(Fixed const & a)
{
    if (this->_fixe != a._fixe)
        return (1);
    return (0);
}

int Fixed::operator>(Fixed const & a) const
{
    if (this->_fixe > a._fixe)
        return (1);
    return (0);
}

int Fixed::operator<(Fixed const & a) const
{
    if (this->_fixe < a._fixe)
        return (1);
    return (0);
}

int Fixed::operator<=(Fixed const & a)
{
    if (this->_fixe <= a._fixe)
        return (1);
    return (0);
}

int Fixed::operator>=(Fixed const & a)
{
    if (this->_fixe >= a._fixe)
        return (1);
    return (0);
}

Fixed &Fixed::operator++()
{
	this->_fixe++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed &Fixed::operator--()
{
	this->_fixe--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return(lhs);
	else
		return (rhs);
}

Fixed const &Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs > rhs)
		return(lhs);
	else
		return (rhs);
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return(rhs);
	else
		return (lhs);
}

Fixed const &Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs < rhs)
		return(rhs);
	else
		return (lhs);
}

std::ostream &operator<<(std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return out;
}
