/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:44:50 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/29 11:28:56 by ichougra         ###   ########.fr       */
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
        
        Fixed & operator=(Fixed const & rhs);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif