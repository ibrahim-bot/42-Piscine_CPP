/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:44:50 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/23 15:28:13 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int _fixe;
        const static int bit = 8;

    public:
        Fixed( void );
        Fixed(Fixed const &);
        ~Fixed();
        void setRawBits(int const);
        int getRawBits(void) const;

        Fixed & operator=(Fixed const & rhs);
};


#endif