/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:25:38 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 18:09:47 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{
    private:
        /* data */

    public:
        Dog(/* args */);
        Dog(Dog const &);
        virtual ~Dog();
        virtual std::string getType() const;
        virtual void makeSound() const;

        Dog & operator=(Dog const &);
};

#endif