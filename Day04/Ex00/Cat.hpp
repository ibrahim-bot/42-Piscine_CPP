/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:28:55 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/05 13:03:00 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
    private:
        /* data */
    public:
        Cat(/* args */);
        virtual ~Cat();
        virtual std::string getType() const;
        virtual void makeSound() const;
};

class WrongCat : virtual public WrongAnimal
{
    private:
        /* data */
    public:
        WrongCat(/* args */);
        virtual ~WrongCat();
        void makeSound() const;
};

#endif