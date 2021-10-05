/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:57:43 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/05 15:01:00 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : virtual public AMateria
{
    private:
        /* data */
    public:
        Cure(/* args */);
        ~Cure();
        virtual AMateria* clone() const ;
};

#endif