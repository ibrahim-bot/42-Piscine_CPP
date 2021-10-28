/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:44:58 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/26 15:55:43 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;


    // Fixed op(10);
    // Fixed op2(5);

    // op = op + op2;
    // std::cout << op.toInt() << std::endl;
    // op = op - op2;
    // std::cout << op.toInt() << std::endl;
    // op = op * op2;
    // std::cout << op.toInt() << std::endl;
    // op = op / op;
    // std::cout << op.toInt() << std::endl;

    // Fixed egal(10);
    // Fixed egal2(10);
    // Fixed egal3(5);

    // if (egal == egal2)
    //     std::cout << "it's egal " << egal.toInt() << std::endl;
    // if (egal != egal3)
    //     std::cout << "it's not egal " << egal.toInt() << " and " << egal3.toInt() << std::endl;
    // if (egal > egal3)
    //     std::cout << "egal is superieur " << egal.toInt() << std::endl;
    // if (egal3 < egal)
    //     std::cout << "egal3 is inferior " << egal3.toInt() << std::endl;
    //  if (egal3 <= egal)
    //     std::cout << "egal3 is inferior or egal " << egal3.toInt() << std::endl;
    // if (egal >= egal2)
    //     std::cout << "egal is superior or egal " << egal.toInt() << std::endl;
    return 0;
}
