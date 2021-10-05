/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:23:37 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/05 13:03:06 by ichougra         ###   ########.fr       */
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
        virtual ~Animal();
        virtual void makeSound() const;
        virtual std::string getType() const;
};

class WrongAnimal
{
    protected:

    public:
        WrongAnimal(/* args */);
        virtual ~WrongAnimal();
        void makeSound() const;
};

#endif