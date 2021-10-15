/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:44:50 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/13 18:52:21 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _fixe;
        const static int bit = 8;

    public:
        Fixed( void );
        Fixed(Fixed const &);
        Fixed(const int);
        Fixed(const float);
        ~Fixed();

        void setRawBits(int const);
        int getRawBits(void) const;
        float toFloat(void) const;
        int toInt(void) const;
        
        Fixed & operator=(Fixed const &);
        Fixed & operator+(Fixed const &);
        Fixed & operator-(Fixed const &);
        Fixed & operator*(Fixed const &);
        Fixed & operator/(Fixed const &);

        int operator==(Fixed const &);
        int operator!=(Fixed const &);
        int operator>(Fixed const &) const;
        int operator<(Fixed const &) const;
        int operator<=(Fixed const &);
        int operator>=(Fixed const &);

        Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

        static Fixed &min(Fixed &lhs, Fixed &rhs);
		static Fixed const &min(Fixed const &lhs, Fixed const &rhs);
		static Fixed &max(Fixed &lhs, Fixed &rhs);
		static Fixed const &max(Fixed const &lhs, Fixed const &rhs);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif