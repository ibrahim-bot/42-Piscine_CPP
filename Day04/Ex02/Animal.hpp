/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:23:37 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 15:27:42 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal(/* args */);
        Animal( std::string );
        Animal(Animal const &);
        virtual ~Animal();
        virtual void makeSound() const = 0;
        virtual std::string getType() const;

        Animal & operator=(Animal const &);
};

#endif