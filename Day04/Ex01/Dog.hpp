/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:25:38 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/05 13:14:20 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
    private:
        Brain* ideas;

    public:
        Dog(/* args */);
        virtual ~Dog();
        virtual std::string getType() const;
        virtual void makeSound() const;
};

#endif